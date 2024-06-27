// 13. Roman to Integer
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int sol = 0, back = 0;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'I')
            {
                sol++;
                if (back == 1)
                {
                    sol = sol - 2;
                }
                back = 0;
            }
            else if (s[i] == 'V')
            {
                sol = sol + 5;
                back = 1;
            }
            else if (s[i] == 'X')
            {
                sol = sol + 10;
                if (back == 2)
                {
                    sol = sol - 20;
                    back = 0;
                }
                else
                    back = 1;
            }
            else if (s[i] == 'L')
            {
                sol = sol + 50;
                back = 2;
            }
            else if (s[i] == 'C')
            {
                sol = sol + 100;
                if (back == 3)
                {
                    sol = sol - 200;
                    back = 0;
                }
                else
                    back = 2;
            }
            else if (s[i] == 'D')
            {
                sol = sol + 500;
                back = 3;
            }
            else
            {
                sol = sol + 1000;
                back = 3;
            }
        }
        return sol;
    }
};

int main()
{
    Solution sol;
    string s;
    cin >> s;
    cout << sol.romanToInt(s) << endl;
    return 0;
}