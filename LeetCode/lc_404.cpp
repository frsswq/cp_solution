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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }   

        stack<TreeNode*> s;
        s.push(root);
        int sum = 0;

        while(!s.empty()) {
            TreeNode* curr = s.top(); s.pop();

            if (curr -> right != nullptr) {
                s.push(curr -> right);
            }

            if (curr -> left != nullptr) {
                s.push(curr -> left);

                if (curr -> left -> left == nullptr &&
                    curr -> left -> right == nullptr) {
                        sum += curr -> left -> val;
                    }
            }

        }

        return sum;
    }
};