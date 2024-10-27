#include <bits/stdc++.h>

using namespace std;

// definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> res1, res2;
        stack<TreeNode*> a, b;
        TreeNode* curr1 = root1;

        while (curr1 != nullptr || !a.empty()) {
            while (curr1 != nullptr) {
                a.push(curr1);
                curr1 = curr1 -> left;
            }

            curr1 = a.top();
            a.pop();

            if (curr1 -> left == nullptr && curr1 -> right == nullptr) {
                res1.push_back(curr1 -> val);
            }
            
            curr1 = curr1 -> right;
        }

        TreeNode* curr2 = root2;

        while (curr2 != nullptr || !b.empty()) {
            while (curr2 != nullptr) {
                b.push(curr2);
                curr2 = curr2 -> left;
            }

            curr2 = b.top();
            b.pop();

            if (curr2 -> left == nullptr && curr2 -> right == nullptr) {
                res2.push_back(curr2 -> val);
            }
            
            curr2 = curr2 -> right;
        }

        return res1 == res2;

    }
};