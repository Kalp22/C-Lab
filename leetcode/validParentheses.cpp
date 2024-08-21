// 20. Valid Parentheses
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> stack;

        for (auto i : s)
        {
            if (i == '(' || i == '[' || i == '{')
                stack.push_back(i);
            else if (!stack.empty() && ((i == ')' && stack.back() == '(') ||
                                        (i == ']' && stack.back() == '[') ||
                                        (i == '}' && stack.back() == '{')))
                stack.pop_back();
            else
                return false;
        }

        return stack.empty();
    }
};

int main()
{
    Solution sol;
    string s;
    cin >> s;
    cout << sol.isValid(s) << endl;
    return 0;
}