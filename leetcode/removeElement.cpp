#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0, i = nums.size() - 1;
        while (i >= 0)
        {
            if (nums[i] == val)
            {
                if (i != nums.size() - 1 - k)
                {
                    swap(nums[i], nums[nums.size() - 1 - k]);
                }
                k++;
            }
            i--;
        }
        return nums.size() - k;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int val;
    cin >> val;
    cout << s.removeElement(nums, val) << endl;
    return 0;
}