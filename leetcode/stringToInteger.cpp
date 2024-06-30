// 8. String to Integer (atoi)
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int result = 0;
        bool leadingWhitespace = true, firstOccurance = true, negative = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ' && leadingWhitespace)
                leadingWhitespace = false;
            if (!leadingWhitespace)
            {
                if (((s[i] >= 'A' && s[i] <= 'Z') ||
                     (s[i] >= 'a' && s[i] <= 'z')) &&
                    firstOccurance)
                {
                    return result;
                }
                if (s[i] == '+' && firstOccurance)
                {
                    firstOccurance = false;
                    continue;
                }
                else if (s[i] == '-' && firstOccurance)
                {
                    firstOccurance = false;
                    negative = true;
                }
                else if (s[i] >= '0' && s[i] <= '9')
                {
                    long long temp = result;
                    temp *= 10;
                    temp += (s[i] - '0');
                    if (temp > (pow(2, 31) - 1))
                        return negative ? -1 * pow(2, 31) : pow(2, 31) - 1;
                    result = temp;
                    firstOccurance = false;
                }
                else
                    return negative ? -result : result;
            }
        }
        return negative ? -result : result;
    }
};

int main()
{
    Solution s;
    string str;
    cin >> str;
    cout << s.myAtoi(str) << endl;
    return 0;
}