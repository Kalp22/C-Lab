#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int i = 0;
        std::sort(nums.begin(), nums.end());

        for (i; i < nums.size(); i++)
        {
            if (i != nums[i])
            {
                break;
            }
        }
        return i;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << s.missingNumber(nums) << endl;
    return 0;
}