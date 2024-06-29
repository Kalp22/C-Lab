// 2243. Calculate Digit Sum of a String
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string digitSum(string s, int k)
    {
        while (s.size() > k)
        {
            int sum = 0,
                n = s.size() % k == 0 ? s.size() / k : s.size() / k + 1;
            string arr[n];
            for (int i = 0; i < s.size(); i++)
            {
                sum += s[i] - '0';
                if ((i + 1) % k == 0 || i == s.size() - 1)
                {
                    arr[i / k] = to_string(sum);
                    sum = 0;
                }
            }
            s = "";
            for (int i = 0; i < n; i++)
            {
                s += arr[i];
            }
        }
        return s;
    }
};

int main()
{
    Solution s;
    string str;
    int k;
    cin >> str >> k;
    cout << s.digitSum(str, k) << endl;
    return 0;
}