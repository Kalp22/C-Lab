// 540. Single Element in a Sorted Array
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int end = nums.size() - 1;
        int start = 0;

        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (mid == 0)
            {
                break;
            }
            if (mid % 2 == 0)
            {
                if (nums[mid] == nums[mid - 1])
                {
                    if (end - 1 == mid)
                    {
                        break;
                    }
                    end = mid - 1;
                }
                else
                {
                    if (start == mid)
                    {
                        break;
                    }
                    start = mid;
                }
            }
            else
            {
                if (nums[mid] == nums[mid - 1])
                {
                    if (start == mid)
                    {
                        break;
                    }
                    start = mid + 1;
                }
                else
                {
                    if (end == mid)
                    {
                        break;
                    }
                    end = mid;
                }
            }
        }
        return nums[start];
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3};

    cout << solution.singleNonDuplicate(nums);

    return 0;
}