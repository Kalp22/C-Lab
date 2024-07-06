// 125. Valid Palindrome
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
                 isdigit(s[i])) &&
                ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') ||
                 isdigit(s[j])))
            {
                if (isdigit(s[i]) && isdigit(s[i]))
                {
                    if (s[i] == s[j])
                    {
                        ++i;
                        --j;
                        continue;
                    }
                }
                else
                {
                    char a = (char)tolower(s[i]);
                    char b = (char)tolower(s[j]);
                    if (a == b)
                    {
                        ++i;
                        --j;
                        continue;
                    }
                }
                return false;
            }
            else
            {
                if ((s[i] >= 'a' && s[i] <= 'z') ||
                    (s[i] >= 'A' && s[i] <= 'Z') || isdigit(s[i]))
                    --j;
                else
                    ++i;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    string str;
    cin >> str;
    cout << s.isPalindrome(str) << endl;
    return 0;
}