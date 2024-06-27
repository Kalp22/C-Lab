// 9. Palindrome Number
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        long long int reversed = 0;
        long long int num = x;
        while (num != 0)
        {
            int digit;
            digit = num % 10;
            reversed = digit + (reversed * 10);
            num /= 10;
        }
        return (reversed == x);
    }
};

int main()
{
    Solution sol;
    int x;
    cin >> x;
    cout << sol.isPalindrome(x) << endl;
    return 0;
}