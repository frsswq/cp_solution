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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;

        stack<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode* curr = q.top(); q.pop();

            if (curr -> val == targetSum &&
                curr -> left == nullptr &&
                curr -> right == nullptr) {
                return true;
            }

            if (curr -> right != nullptr) {
                curr -> right -> val += curr -> val;
                q.push(curr -> right);
            }

            if (curr -> left != nullptr) {
                curr -> left -> val += curr -> val;
                q.push(curr -> left);
            }
        }

        return false;
    }
};