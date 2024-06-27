#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pTri;
        vector<int> preRow;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> oneRow;
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                    oneRow.push_back(1);
                else if (j == i)
                    oneRow.push_back(1);
                else
                {
                    oneRow.push_back(preRow[j - 1] + preRow[j]);
                }
            }
            pTri.push_back(oneRow);
            preRow = oneRow;
        }
        return pTri;
    }
};

int main()
{
    Solution s;
    int numRows;
    cin >> numRows;
    vector<vector<int>> pTri = s.generate(numRows);
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pTri[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}