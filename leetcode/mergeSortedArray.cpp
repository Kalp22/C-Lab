#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0)
            return;
        if (m == 0) {
            nums1 = nums2;
            return;
        }
        int arr[m];
        for (int a = 0; a < m; a++) {
            arr[a] = nums1[a];
        }
        int i = 0, j = 0, k = 0;
        while (i < m && j < n) {
            if (arr[i] < nums2[j]) {
                nums1[k] = arr[i];
                i++;
            } else {
                nums1[k] = nums2[j];
                j++;
            }
            k++;
        }
        while (i < m) {
            nums1[k] = arr[i];
            i++;
            k++;
        }
        while (j < n) {
            nums1[k] = nums2[j];
            j++;
            k++;
        }
    }
};

int main() {
    Solution s;
    vector<int> nums1, nums2;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m + n; i++) {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    s.merge(nums1, m, nums2, n);
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}