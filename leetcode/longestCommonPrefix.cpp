#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string output = "";
        sort(strs.begin(), strs.end());
        string start = strs[0], end = strs[strs.size() - 1];

        for (int i = 0; i < start.size(); i++)
        {
            if (start[i] == end[i])
            {
                output += start[i];
            }
            else
                break;
        }

        return output;
    }
};

int main()
{
    Solution sol;
    vector<string> strs;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        strs.push_back(input);
    }
    cout << sol.longestCommonPrefix(strs) << endl;
    return 0;
}