// 2221. Triangular Sum of an Array
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int j = 1;
        while (j < nums.size())
        {
            for (int i = 0; i < nums.size() - 1; i++)
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            j++;
        }
        return nums[0];
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << s.triangularSum(nums) << endl;
    return 0;
}