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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr) return root2;
        if (root2 == nullptr) return root1;

        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root1, root2});
        
        while (!q.empty()) {
            auto [curr1, curr2] = q.front(); q.pop();

            curr1 -> val += curr2 -> val;

            if (curr1 -> left != nullptr &&
                curr2 -> left != nullptr) {
                q.push({curr1 -> left, curr2 -> left});
            } else if (
                curr1 -> left == nullptr &&
                curr2 -> left != nullptr) {
                curr1 -> left = curr2 -> left;       
            }

            if (curr1 -> right != nullptr &&
                curr2 -> right != nullptr) {
                q.push({curr1 -> right, curr2 -> right});
            } else if (
                curr1 -> right == nullptr &&
                curr2 -> right != nullptr) {
                curr1 -> right = curr2 -> right;       
            }
        }

        return root1;
  }
};