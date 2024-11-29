// 599. Minimum Index Sum of Two Lists
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<string> findRestaurant(vector<string> &list1,
                                  vector<string> &list2)
    {
        int minIndex = list1.size() + list2.size();
        vector<string> output;

        for (int j = 0; j < list2.size(); j++)
        {
            for (int i = 0; i < list1.size(); i++)
            {
                if (list1[i] == list2[j])
                {
                    if (i + j < minIndex && output.size() > 0)
                    {
                        output.clear();
                    }
                    if (i + j <= minIndex)
                    {
                        output.push_back(list1[i]);
                        minIndex = i + j;
                    }
                }
                if (i + j >= minIndex)
                {
                    break;
                }
            }
        }

        return output;
    }
};

int main()
{
    Solution s;
    vector<string> list1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
    vector<string> list2 = {"KFC", "Shogun", "Burger King"};

    vector<string> output = s.findRestaurant(list1, list2);

    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}