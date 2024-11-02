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
    int minDiffInBST(TreeNode* root) {
        if (root == nullptr) return 0;

        int min_diff = INT_MAX;

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
                min_diff = min(min_diff, abs(prev -> val - curr -> val));
            }

            prev = curr;
            curr = curr -> right;
        }

        return min_diff;
    }
};