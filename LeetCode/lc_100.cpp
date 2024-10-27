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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr) return false;

        queue<TreeNode*> q1, q2;
        q1.push(p);
        q2.push(q);

        while(!q1.empty() && !q2.empty()) {
            TreeNode* curr1 = q1.front(); q1.pop();
            TreeNode* curr2 = q2.front(); q2.pop();

            if (!curr1 && !curr2) {
                continue;
            }

            if (!curr1 || !curr2) {
                return false;
            }

            if (curr1 -> val != curr2 -> val) {
                return false;
            }

            q1.push(curr1 -> left);
            q2.push(curr2 -> left);
            q1.push(curr1 -> right);
            q2.push(curr2 -> right);
        }

        return q1.empty() && q2.empty();

        // while(!q1.empty() && !q2.empty()) {
        //     TreeNode* curr1 = q1.front(); q1.pop();
        //     TreeNode* curr2 = q2.front(); q2.pop();

        //     if (curr1 -> val != curr2 -> val) {
        //         return false;
        //     }

        //     if ((curr1 -> left == nullptr) != (curr2 -> left == nullptr)) {
        //         return false;
        //     }

        //     if ((curr1 -> right == nullptr) != (curr2 -> right == nullptr)) {
        //         return false;
        //     }

        //     if (curr1 -> left && curr2 -> left) {
        //         q1.push(curr1 -> left);
        //         q2.push(curr2 -> left);
        //     }

        //     if (curr1 -> right && curr2 -> right) {
        //         q1.push(curr1 -> right);
        //         q2.push(curr2 -> right);
        //     }
        // }

        // return true;
    }
};