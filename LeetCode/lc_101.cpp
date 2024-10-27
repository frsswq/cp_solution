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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        queue<TreeNode*> q1, q2;

        if (root -> left != nullptr) q1.push(root -> left);
        if (root -> right != nullptr) q2.push(root -> right);

        if (q1.size() != q2.size()) {
            return false;
        }

        while (!q1.empty() && !q2.empty()) {
            TreeNode* curr1 = q1.front();
            TreeNode* curr2 = q2.front();

            q1.pop();
            q2.pop();

            if (curr1 -> val != curr2 -> val) {
                return false;
            }

            if ((curr1 -> left && curr2 -> right == nullptr) || 
                (curr1 -> left == nullptr && curr2 -> right)) {
                    return false;
                }
            
            if ((curr1 -> right && curr2 -> left == nullptr) || 
                (curr1 -> right == nullptr && curr2 -> left)) {
                    return false;
                }
            
            if (curr1 -> left != nullptr &&
                curr2 -> right != nullptr) {
                    q1.push(curr1 -> left);
                    q2.push(curr2 -> right);
                }
            
            if (curr1 -> right != nullptr &&
                curr2 -> left != nullptr) {
                    q1.push(curr1 -> right);
                    q2.push(curr2 -> left);
                }
        }

        return true;

        // q1.push(root -> left);
        // q2.push(root -> right);

        // while(!q1.empty() && !q2.empty()) {
        //     TreeNode* curr1 = q1.front();
        //     TreeNode* curr2 = q2.front();

        //     q1.pop();
        //     q2.pop();

        //     if (curr1 == nullptr && curr2 == nullptr) {
        //         continue;
        //     }

        //     if (curr1 == nullptr || curr2 == nullptr) {
        //         return false;
        //     }

        //     if (curr1 -> val != curr2 -> val) {
        //         return false;
        //     }

        //     q1.push(curr1 -> left);
        //     q2.push(curr2 -> right);
        //     q1.push(curr1 -> right);
        //     q2.push(curr2 -> left);

        //     // if ((curr1 -> left != nullptr) != (curr2 -> right != nullptr)) {
        //     //     return false;
        //     // }

        //     // if ((curr1 -> right != nullptr) != (curr2 -> left != nullptr)) {
        //     //     return false;
        //     // }

        //     // if (curr1 -> left != nullptr) {
        //     //     q1.push(curr1 -> left);
        //     // }

        //     // if (curr2 -> right != nullptr) {
        //     //     q2.push(curr2 -> right);
        //     // }

        //     // if (curr1 -> right != nullptr) {
        //     //     q1.push(curr1 -> right);
        //     // }

        //     // if (curr2 -> left != nullptr) {
        //     //     q2.push(curr2 -> left);
        //     // }

        // }

        // return q1.empty() && q2.empty();
    }
};