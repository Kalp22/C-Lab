// 66. Plus One
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        bool nine = true;

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9 && nine)
                digits[i] = 0;
            else
            {
                if (nine)
                    digits[i] += 1;
                nine = false;
            }
        }
        if (nine)
        {
            digits.emplace(digits.begin(), 1);
        }
        return digits;
    }
};

int main()
{
    Solution s;
    vector<int> digits;
    for(int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        digits.push_back(x);
    }
    vector<int> result = s.plusOne(digits);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}