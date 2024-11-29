// 1942. The Number of the Smallest Unoccupied Chair
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int smallestChair(vector<vector<int>> &times, int targetFriend)
    {
        int targetTime = times[targetFriend][0];

        int chairs[times.size()] = {};

        sort(times.begin(), times.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[0] < b[0]; });

        int j = 0;
        for (int i = 0; i < targetTime; i++)
        {
            while (chairs[j] != 0)
            {
                j++;
            }
            for (int k = 0; k < j; k++)
            {
                if (chairs[k] <= times[i][0])
                {
                    chairs[k] = 0;
                    j = k;
                    break;
                }
            }
            chairs[j] = times[i][1];
            if (times[i][0] == targetTime)
            {
                return j;
            }
        }
        return j;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> times;
    int targetFriend;
    int n;

    cin >> n >> targetFriend;

    for (int i = 0; i < n; i++)
    {
        vector<int> time;
        for (int j = 0; j < 2; j++)
        {
            int x;
            cin >> x;
            time.push_back(x);
        }
        times.push_back(time);
    }

    cout << s.smallestChair(times, targetFriend) << endl;

    return 0;
}