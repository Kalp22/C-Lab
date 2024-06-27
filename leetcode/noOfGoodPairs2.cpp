// 3164. Find the Number of Good Pairs II
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    long long numberOfPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        
    }
};

int main()
{
    Solution s;
    vector<int> nums1, nums2;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    int k;
    cin >> k;
    cout << s.numberOfPairs(nums1, nums2, k) << endl;
    return 0;
}