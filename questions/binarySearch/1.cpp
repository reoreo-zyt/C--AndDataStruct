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

#include <vector>
#include <iostream>

using namespace std;

// TODO 数组、vector、array 的区别
int binarySearch(vector<int> &nums, int target)
{
    if (nums.size() == 0)
        return -1;
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if (nums[mid] == target)
        {
            return mid;
        }
        // 搜索区间变为 [mid+1, right]
        else if (nums[mid] < target)
            left = mid + 1;
        // 搜索区间变为 [left, mid - 1]
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_back(4);
    obj.push_back(5);

    cout << binarySearch(obj, 5) << endl;
}