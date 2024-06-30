// 2042. Check if Numbers Are Ascending in a Sentence
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool areNumbersAscending(string s)
    {
        int prevNo = INT_MIN;
        for (int i = 0; i < s.size(); i++)
        {
            int temp = 0;
            if (s[i] >= '0' && s[i] <= '9')
            {
                while (s[i] >= '0' && s[i] <= '9' && i < s.size())
                {
                    temp *= 10;
                    temp += s[i] - '0';
                    i++;
                }
                if (temp <= prevNo)
                    return false;
                prevNo = temp;
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
    cout << s.areNumbersAscending(str) << endl;
    return 0;
}