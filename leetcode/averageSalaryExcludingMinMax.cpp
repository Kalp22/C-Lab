// 1491. Average Salary Excluding the Minimum and Maximum Salary
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double average(vector<int> &salary)
    {
        int max_i = 0, min_i = 0;
        int sum = salary[0];
        for (int i = 1; i < salary.size(); ++i)
        {
            sum += salary[i];
            if (salary[i] < salary[min_i])
                min_i = i;
            if (salary[max_i] < salary[i])
                max_i = i;
        }

        sum = sum - (salary[min_i] + salary[max_i]);
        return (double)sum / (salary.size() - 2);
    }
};

int main()
{
    Solution sol;
    vector<int> salary = {4000, 3000, 1000, 2000, 1000, 5000, 1500, 7500, 9000, 5321};
    cout << sol.average(salary) << endl;
    return 0;
}