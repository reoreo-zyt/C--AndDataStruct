int binarySearch(int[] nums, int target)
{
    int left = 0;
    int right = nums.Length - 1;

    while (left <= right)
    {   
        // ! 正数的右移相当于除法，右移几位就除以2的几次方
        // int mid = left + (right - left) / 2;
        int mid = left + ((right - left) >> 1);
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
    }

    return -1;
}

int[] array = { 1, 2, 3, 4, 5 };
Console.WriteLine(binarySearch(array, 1)); // 0
