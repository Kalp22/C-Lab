// 3210. Find the Encrypted String
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string getEncryptedString(string s, int k)
    {
        int SIZE = s.size();
        for (int i = 0; i < SIZE; i++)
        {
            s.push_back(s[(k + i) % SIZE]);
        }
        return s.substr(SIZE, SIZE);
    }
};

int main()
{
    Solution s;
    string str;
    int k;
    cin >> str >> k;
    cout << s.getEncryptedString(str, k) << endl;
    return 0;
}