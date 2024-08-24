// 1480. Running Sum of 1d Array
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums;
        for (int i = 1; i < nums.size(); ++i)
        {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = sol.runningSum(nums);
    for (int i = 0; i < res.size(); ++i)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}