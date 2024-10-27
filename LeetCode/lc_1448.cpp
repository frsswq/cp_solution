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
    int goodNodes(TreeNode* root) {
        int counter = 0;
        stack<pair<TreeNode*, int>> a;
        a.push({root, root -> val});

        while (!a.empty()) {
            pair<TreeNode*, int> top = a.top();
            a.pop();

            TreeNode* curr = top.first;
            int num = top.second;

            if (curr -> val >= num) {
                counter++;
            }

            if (curr -> right != nullptr) {
                a.push({curr -> right, max(curr -> val, num)});
            }

            if (curr -> left != nullptr) {
                a.push({curr -> left, max(curr -> val, num)});
            }
        }

        return counter;
    }
};