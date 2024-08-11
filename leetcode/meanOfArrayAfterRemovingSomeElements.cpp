// 1619. Mean of Array After Removing Some Elements
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int partition(vector<int> &arr, int low, int high)
    {
        int pivot = arr[low];
        int start = low;
        int end = high;
        while (start < end)
        {
            while (arr[start] >= pivot)
                start++;
            while (arr[end] < pivot)
                end--;
            if (start < end)
                swap(arr[start], arr[end]);
        }
        swap(arr[end], arr[low]);
        return end;
    }
    void quickSort(vector<int> &arr, int low, int high)
    {
        if (low < high)
        {
            int pivot = partition(arr, low, high);

            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }
    double trimMean(vector<int> &arr)
    {
        quickSort(arr, 0, arr.size());

        int per = arr.size() / 20, j = 0, sum = 0;
        for (int i = per; i < arr.size() - per; i++)
        {
            sum += arr[i];
            j++;
        }
        return (double)sum / j;
    }
};

int main()
{
    Solution sol;
    vector<int> arr;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    cout << sol.trimMean(arr) << endl;
    return 0;
}