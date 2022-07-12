/*
 * 问题描述：
 * 寻找最左边的满⾜条件的值
 * 
 * 解题思路：
 * 套用查找一个数的解题思路作为思路模板
 * 1. ⾸先定义搜索区间为 [left, right]，注意是左右都闭合，之后会⽤到这个点。
 * 2. 终⽌搜索条件为 left <= right。
 * 3. 循环体内，我们不断计算 mid ，并将 nums[mid] 与⽬标值⽐对。
 *      3.1 如果 nums[mid] 等于⽬标值，则收缩右边界，我们找到了⼀个备胎，继续看看左边还有没有了（注意这⾥不⼀样）
 *      3.2 如果 nums[mid] ⼩于⽬标值，说明⽬标值在 mid 右侧，这个时候搜索区间可缩⼩为 [mid + 1, right]
 *      3.3 如果 nums[mid] ⼤于⽬标值，说明⽬标值在 mid 左侧，这个时候搜索区间可缩⼩为 [left, mid - 1]
 * 4. 由于不会提前返回，因此我们需要检查最终的 left，看 nums[left] 是否等于 target。
 *      4.1 如果不等于 target，或者 left 出了右边边界了，说明⾄死都没有找到⼀个备胎，则返回 -1.
 *      4.2 否则返回 left 即可，备胎转正。
*/

function binarySearchLeft(nums, target) {
    let left = 0;
    let right = nums.length - 1;
    while (left <= right) {
        const mid = Math.floor(left + (right - left) / 2);
        if (nums[mid] == target)
            // 收缩右边界
            right = mid - 1;
        if (nums[mid] < target)
            // 搜索区间变为 [mid+1, right]
            left = mid + 1;
        if (nums[mid] > target)
            // 搜索区间变为 [left, mid - 1]
            right = mid - 1;
    }
    // 检查是否越界
    if (left >= nums.length || nums[left] != target)
        return -1
    return left;
}

console.log(binarySearchLeft([10, 12, 12, 12, 15], 12)); // 1
