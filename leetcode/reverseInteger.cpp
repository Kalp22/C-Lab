// 7. Reverse Integer
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        if (x == 0 || x <= INT_MIN || x >= INT_MAX)
            return 0;
        bool negative = false;
        int y = 0;
        if (x < 0)
        {
            negative = true;
            x = -x;
        }
        while (x > 0)
        {
            int t = x % 10;
            x /= 10;
            long long temp = y;
            temp *= 10;
            temp += t;
            if (temp >= pow(2, 31) - 1)
                return 0;
            y *= 10;
            y += t;
        }
        return negative ? -y : y;
    }
};

int main()
{
    Solution s;
    int x;
    cin >> x;
    cout << s.reverse(x) << endl;
    return 0;
}