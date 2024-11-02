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
    int getMinimumDifference(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* curr = root;
        TreeNode* prev = nullptr;
        int min_diff = INT_MAX;

        while (curr != nullptr || !s.empty()) {
            while (curr != nullptr) {
                s.push(curr);
                curr = curr -> left;
            }

            curr = s.top(); 
            s.pop();

            if (prev != nullptr) {
                min_diff = min(min_diff, curr -> val - prev -> val);
            }

            prev = curr;
            curr = curr -> right;
        }

        return min_diff;
    }
};