// 501. Find Mode in Binary Search Tree
#include <bits/stdc++.h>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
private:
    unordered_map<int, int> noOfOccurances;

    void treeIterator(TreeNode *root)
    {
        if (root == nullptr)
            return;
        noOfOccurances[root->val] += 1;
        if (root->left != nullptr)
        {
            treeIterator(root->left);
        }
        if (root->right != nullptr)
        {
            treeIterator(root->right);
        }
    }

public:
    vector<int> findMode(TreeNode *root)
    {

        TreeNode *iterator = root;

        treeIterator(root);

        int maxFreq = 0;

        for (pair<int, int> e : noOfOccurances)
        {
            maxFreq = max(maxFreq, e.second);
        }

        vector<int> maxNums;
        for (pair<int, int> e : noOfOccurances)
        {
            if (e.second == maxFreq)
                maxNums.push_back(e.first);
        }

        return maxNums;
    }
};

int main()
{
    Solution s;
    TreeNode *next2 = new TreeNode(2);
    TreeNode *next = new TreeNode(2, nullptr, nullptr);
    TreeNode *root = new TreeNode(1, nullptr, next);

    vector<int> result = s.findMode(root);

    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}