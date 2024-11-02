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
    bool isUnivalTree(TreeNode* root) {
        // inorder traversal

        if (root == nullptr) return false;

        stack<TreeNode*> s;
        TreeNode* curr = root;
        TreeNode* prev = nullptr;

        while (!s.empty() || curr) {
            while (curr) {
                s.push(curr);
                curr = curr -> left;
            }

            curr = s.top(); s.pop();
            
            if (prev) {
                if (curr -> val != prev -> val) {
                    return false;
                }
            }

            prev = curr;
            curr = curr -> right;
        }

        return true;
    }
};