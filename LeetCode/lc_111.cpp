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
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        queue<TreeNode*> q;
        q.push(root);
        int level = 1;

        while (!q.empty()) {
            int num_node = q.size();

            while (num_node--) {
                TreeNode* curr = q.front(); q.pop();
                
                if (curr -> left == nullptr &&
                    curr -> right == nullptr) {
                    return level;
                }

                if (curr -> right != nullptr) {
                    q.push(curr -> right);
                }

                if (curr -> left != nullptr) {
                    q.push(curr -> left);
                }
            }

            level++;
        }

        return level;

        // not memory efficient

        // queue<pair<TreeNode*, int>> s;
        // s.push({root, 1});
        // int min_num = INT_MAX;

        // while (!s.empty()) {
        //     pair<TreeNode*, int> f = s.front(); s.pop();
        //     TreeNode* curr = f.first;
        //     int curr_num = f.second;
            
        //     if (curr -> right == nullptr && curr -> left == nullptr) {
        //         min_num = min(min_num, curr_num);
        //         break;
        //     }

        //     if (curr -> left != nullptr) {
        //         s.push({curr -> left, curr_num + 1});
        //     }

        //     if (curr -> right != nullptr) {
        //         s.push({curr -> right, curr_num + 1});
        //     }
        // }

        // return min_num;
    }
};