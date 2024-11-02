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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr) return {};

        int top_val = root -> val;
        queue<TreeNode*> q;

        if (top_val < val) {
            q.push(root -> right);
        } else if (top_val > val) {
            q.push(root -> left);
        } else {
            return root;
        }

        while (!q.empty()) {
            TreeNode* curr = q.front(); q.pop();
            int curr_val = curr -> val;
            
            if (curr_val < val && curr -> right) {
                q.push(curr -> right);
            } else if (curr_val > val && curr -> left) {
                q.push(curr -> left);
            } else if (curr_val == val) {
                return curr;
            }
        }

        return {};
    }
};