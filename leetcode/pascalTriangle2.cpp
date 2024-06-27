#include <bits/stdc++.h>

using namespace std;

class Solution1 // Optimized solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> ans(rowIndex + 1);
        ans[0] = 1;
        long answ = 1;
        for (int i = 1; i <= rowIndex; i++)
        {
            answ = (answ * (rowIndex + 1 - i)) / i;
            ans[i] = answ;
        }
        return ans;
    }
};

class Solution2 // My solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> preRow;
        for (int i = 0; i <= rowIndex; i++)
        {
            vector<int> oneRow;
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                    oneRow.push_back(1);
                else if (j == i)
                    oneRow.push_back(1);
                else
                    oneRow.push_back(preRow[j - 1] + preRow[j]);
            }
            preRow = oneRow;
        }
        return preRow;
    }
};

int main()
{
    Solution1 s1;
    Solution2 s2;
    int rowIndex;
    cin >> rowIndex;
    vector<int> ans1 = s1.getRow(rowIndex);
    for (int i = 0; i <= rowIndex; i++)
    {
        cout << ans1[i] << " ";
    }
    cout << endl;
    vector<int> ans2 = s2.getRow(rowIndex);
    for (int i = 0; i <= rowIndex; i++)
    {
        cout << ans2[i] << " ";
    }
    return 0;
}