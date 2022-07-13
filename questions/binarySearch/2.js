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
