// 26. Remove Duplicates from Sorted Array
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int x = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] != nums[i])
            {
                nums[x] = nums[i];
                x++;
            }
        }
        return x;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}