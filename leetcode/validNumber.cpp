// 65. Valid Number
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isNumber(string s)
    {
        bool hasDigit = false, hasDot = false, hasE = false;
        int n = s.size();

        for (int i = 0; i < n; ++i)
        {
            char ch = s[i];
            if (isdigit(ch))
                hasDigit = true;
            else if (ch == '+' || ch == '-')
            {
                if (i != 0 && s[i - 1] != 'e' && s[i - 1] != 'E')
                    return false;
            }
            else if (ch == '.')
            {

                if (hasDot || hasE)
                    return false;

                hasDot = true;
            }
            else if (ch == 'e' || ch == 'E')
            {
                if (hasE || !hasDigit)
                    return false;

                hasE = true;
                hasDigit = false;
            }
            else
                return false;
        }
        return hasDigit;
    }
};

int main()
{
    Solution s;
    string str;
    cin >> str;
    cout << s.isNumber(str) << endl;
    return 0;
}