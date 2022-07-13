#include <iostream>
#include <vector>

using namespace std;

int binarySearchLeft(vector<int> &nums, int target)
{
    // 搜索区间为 [left, right]
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if (nums[mid] == target)
        {
            // 收缩右边界
            right = mid - 1;
        }
        if (nums[mid] < target)
        {
            // 搜索区间变为 [mid+1, right]
            left = mid + 1;
        }
        if (nums[mid] > target)
        {
            // 搜索区间变为 [left, mid-1]
            right = mid - 1;
        }
    }
    // 检查是否越界
    if (left >= nums.size() || nums[left] != target)
        return -1;
    return left;
}

int main()
{
    vector<int> obj;
    obj.push_back(10);
    obj.push_back(12);
    obj.push_back(12);
    obj.push_back(12);
    obj.push_back(15);

    cout << binarySearchLeft(obj, 12) << endl;
}