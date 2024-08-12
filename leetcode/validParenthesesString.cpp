// 678. Valid Parenthesis String
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool checkValidString(string s)
    {
        int low = 0, high = 0;
        for (char i : s)
        {
            if (i == '(')
            {
                low++;
                high++;
            }
            else if (i == ')')
            {
                low--;
                high--;
            }
            else
            {
                low--;
                high++;
            }
            if (low < 0)
                low = 0;
            if (high < 0)
                return false;
        }
        return low == 0;
    }
};

int main()
{
    Solution sol;
    string s;
    cin >> s;
    cout << sol.checkValidString(s) << endl;
    return 0;
}