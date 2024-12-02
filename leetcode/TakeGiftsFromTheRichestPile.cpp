// 2558. Take Gifts From the Richest Pile
#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        long long remaining = 0;
        sort(gifts.begin(), gifts.end(), compare);

        for (int i = 0; i < k; i++)
        {
            double root = sqrt(gifts[0]);
            gifts[0] = floor(root);

            sort(gifts.begin(), gifts.end(), compare);
        }

        for (int gift : gifts)
        {
            remaining += gift;
        }
        return remaining;
    }
};

int main()
{
    Solution s;
    vector<int> gifts;
    int k;
    int n;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        gifts.push_back(x);
    }

    cout << endl
         << s.pickGifts(gifts, k) << endl;
    return 0;
}