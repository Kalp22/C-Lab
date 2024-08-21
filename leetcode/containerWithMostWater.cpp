// 11. Container With Most Water
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, area = 0;
        while (left < right)
        {
            area = max(min(height[left], height[right]) * (right - left), area);

            if (height[left] < height[right])
                ++left;
            else
                --right;
        }
        return area;
    }
};

int main()
{
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << sol.maxArea(height) << endl;
    return 0;
}