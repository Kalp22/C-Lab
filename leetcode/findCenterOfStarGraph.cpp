// 1791. Find Center of Star Graph
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        int i = 1, a = edges[0][0], b = edges[0][1];
        if (a == edges[1][0] || a == edges[1][1])
            return a;
        else
            return b;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    vector<vector<int>> edges(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> edges[i][0] >> edges[i][1];
    }
    cout << s.findCenter(edges) << endl;
    return 0;
}