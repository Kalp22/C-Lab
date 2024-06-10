#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i, j;
        for (i = 0; i < nums.size(); i++)
        {
            int current = nums[i];
            int x = target - current;
            for (j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] == x)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> nums;
    int target = 9;
    for (int i = 0; i < 4; i++)
    {
        int input;
        cin >> input;
        nums.push_back(input);
    }
    vector<int> ans = sol.twoSum(nums, target);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}