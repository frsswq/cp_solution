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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;

        if (root != nullptr) {
            q.push(root);
        }

        int depth = 0;

        while(!q.empty()) {
            int num_node = q.size();

            for (int i = 0; i < num_node; i++) {
                TreeNode* curr = q.front();
                q.pop();

                if (curr -> right) {
                    q.push(curr -> right);
                }

                if (curr -> left) {
                    q.push(curr -> left);
                }
            }
            
            depth++;
        }

        return depth;
    }
};