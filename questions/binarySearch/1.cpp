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
        // ! 正数的右移相当于除法，右移几位就除以2的几次方
        /*
         * left + (right - left) / 2 这是防止整型溢出的写法。
         * 实际的 (right + left) / 2 求中点会导致溢出的风险，导致 mid 的计算结果也不准确。
         * left / 2 + right / 2
         */
        // int mid = left + (right - left) / 2;
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