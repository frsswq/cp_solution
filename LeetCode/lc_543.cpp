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
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;

        unordered_map<TreeNode*, int> h;
        stack<pair<TreeNode*, bool>> s;
        s.push({root, false});
        int dim = 0;

        // tree traversal, then processing
        
        while (!s.empty()) {
            auto [curr, visited] = s.top(); s.pop();

            if (!visited) {
                s.push({curr, true});

                if (curr -> right) {
                    s.push({curr -> right, false});
                }

                if (curr -> left) {
                    s.push({curr -> left, false});
                }

            } else {
                int lh = h[curr -> left];
                int rh = h[curr -> right];
                h[curr] = 1 + max(lh, rh);
                dim = max(dim, lh + rh);
            }
        }

        return dim;
    }
};
