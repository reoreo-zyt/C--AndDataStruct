/*
 * 问题描述：
 * 给定⼀个由数字组成的有序数组 nums，并给你⼀个数字 target。
 * 问 nums 中是否存在 target。如果存在，则返回其在 nums 中的索引。如果不存在，则返回 -1。
 * 
 * 解题思路：
 * 使用二分法的前提是数组有序！
 * 1. 先从数组的中间开始查找，如果正好是查找的元素，则搜索过程结束。
 * 2. 如果⽬标元素⼤于中间元素，则在数组⼤于中间元素的那⼀半中查找，⽽且跟开始⼀样从中间元素开始⽐较。
 * 3. 如果⽬标元素⼩于中间元素，则在数组⼩于中间元素的那⼀半中查找，⽽且跟开始⼀样从中间元素开始⽐较。
 * 4. 如果在某⼀步骤数组为空，则代表找不到。
 * 
 * 复杂度分析：
 * 平均时间复杂度：O(logN)
 * 最坏时间复杂度：O(logN)
 * 最优时间复杂度：O(1)
 * 空间复杂度：
 *     迭代：O(1)
 *     递归：O(logN) 无尾调用消除
*/

function binarySearch(nums, target) {
    let left = 0;
    let right = nums.length - 1;

    while (left <= right) {
        // 注意二分迭代过程中的中点位置
        // ! let const 有块级作用域，每循环一次就会重新声明一次。
        /*
         * left + (right - left) / 2 这是防止整型溢出的写法。
         * 实际的 (right + left) / 2 求中点会导致溢出的风险，导致 mid 的计算结果也不准确。
         * left / 2 + right / 2
        */
        const mid = Math.floor(left + (right - left) / 2);
        if (nums[mid] == target) return mid;
        if (nums[mid] < target)
            // 搜索区间变为 [mid+1, right]
            left = mid + 1;
        if (nums[mid] > target)
            // 搜索区间变为 [left, mid - 1]
            right = mid - 1;
    }

    return -1;
}

console.log(binarySearch([1, 2, 3, 4, 5], 1));