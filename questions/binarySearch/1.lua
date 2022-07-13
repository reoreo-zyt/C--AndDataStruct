local function binarySearch(nums, target)
    -- ! lua 数组下标从 1 开始！
    local left = 1;
    -- #nums 求出的就是nums数组的长度
    local right = #nums;

    while (left <= right) do
        local mid = math.floor(left + (right - left) / 2);

        print(mid);
        print(nums[mid]);

        if (nums[mid] == target) then
            return mid;
        end
        if (nums[mid] < target) then
            left = mid + 1;
        end
        if (nums[mid] > target) then
            right = mid - 1;
        end
    end

    return -1;
end

print(binarySearch({ 1, 2, 3, 4, 5 }, 1));
