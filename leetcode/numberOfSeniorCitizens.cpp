#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int count = 0;
        for (int i = 0; i < details.size(); i++)
        {
            char a = details[i].at(11), b = details[i].at(12);
            if (int(a) - 48 == 6 && int(b) - 48 > 0 || int(a) - 48 > 6)
                count++;
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<string> str = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};

    cout << s.countSeniors(str) << endl;
    return 0;
}