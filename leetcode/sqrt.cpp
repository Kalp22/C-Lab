// 69. Sqrt(x)
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {

        if (x == 0 || x == 1)
        {
            return x;
        }
        long long left = 1, right = x;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == x)
            {
                return mid;
            }
            else if (square < x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return right;
    }
};

int main()
{
    Solution s;
    int x;
    cin >> x;
    cout << s.mySqrt(x) << endl;
    return 0;
}