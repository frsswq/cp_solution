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
    vector<double> averageOfLevels(TreeNode* root) {
        // level traversal using queue
        if (root == nullptr) return {};

        cout << fixed << setprecision(5);

        queue<TreeNode*> q;
        q.push(root);
        vector<double> res;

        while(!q.empty()) {
            double len = (double) q.size();
            int num_nodes = q.size();
            double curr_sum = 0;

            while (num_nodes--) {
                TreeNode* curr = q.front(); q.pop();
                curr_sum += (double) curr -> val;
                // curr_sum += static_cast<double> (curr -> val);

                if (curr -> left != nullptr) {
                    q.push(curr -> left);
                }

                if (curr -> right != nullptr) {
                    q.push(curr -> right);
                }
            }

            res.push_back(curr_sum / len);
        }

        return res;
    }
};