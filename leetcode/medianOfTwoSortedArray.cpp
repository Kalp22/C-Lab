// 4. Median of Two Sorted Arrays
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void mergeInPlace(vector<int> &v, int start, int mid, int end)
    {
        int total_len = end - start + 1;
        int gap = total_len / 2 + total_len % 2;
        while (gap > 0)
        {
            int i = start, j = start + gap;
            while (j <= end)
            {
                if (v[i] > v[j])
                {
                    swap(v[i], v[j]);
                }
                ++i, ++j;
            }
            gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
        }
    }
    void mergeSort(vector<int> &v, int start, int end)
    {
        if (start >= end)
            return;

        int mid = (start + end) >> 1;
        mergeSort(v, start, mid);
        mergeSort(v, mid + 1, end);
        mergeInPlace(v, start, mid, end);
    }
    vector<int> sortArray(vector<int> &nums)
    {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> num = nums1;
        vector<int>::iterator iter = num.end();

        num.insert(iter, nums2.begin(), nums2.end());

        num = sortArray(num);

        int size = num.size();

        if (size % 2 == 0)
            return (double)(num[size / 2] + num[size / 2 - 1]) / 2;
        return (double)num[size / 2];
    }
};

int main()
{
    Solution sol;
    vector<int> nums1, nums2;
    int n, m, x;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        nums2.push_back(x);
    }
    cout << sol.findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}