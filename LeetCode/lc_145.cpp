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
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        TreeNode* prev = nullptr;

        while (!s.empty() || curr) {
            while (curr) {
                s.push(curr);
                curr = curr -> left;
            }

            TreeNode* check = s.top();

            if (check -> right && check -> right != prev) {
                curr = check -> right;
            } else {
                res.push_back(check -> val);
                s.pop();
                prev = check;
            }
        }

        return res;
    }
};