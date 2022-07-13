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