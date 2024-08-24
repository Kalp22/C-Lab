// 2455. Average Value of Even Numbers in an Array Divisible by 3
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int sum = 0, count = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0)
            {
                sum += nums[i];
                ++count;
            }
        }
        return count != 0 ? sum / count : 0;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 6, 9, 12, 18, 24, 36};
    cout << sol.averageValue(nums) << endl;
    return 0;
}