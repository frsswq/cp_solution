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
    bool findTarget(TreeNode* root, int k) {
        // most efficient O(n);
        if (root == nullptr) return false;

        stack<TreeNode*> ls, rs;
        TreeNode* max_left = root;
        TreeNode* max_right = root;

        while (max_left) {
            ls.push(max_left);
            max_left = max_left -> left;
        }

        while (max_right) {
            rs.push(max_right);
            max_right = max_right -> right;
        }

        while (!ls.empty() && !rs.empty()) {
            TreeNode* curr_left = ls.top();
            TreeNode* curr_right = rs.top();

            if (curr_left == curr_right) {
                break;
            }

            int curr_sum = curr_left -> val + curr_right -> val;

            if (curr_sum < k) {
                ls.pop();
                TreeNode* left_check = curr_left -> right;

                while(left_check) {
                    ls.push(left_check);
                    left_check = left_check -> left;
                }

            } else if (curr_sum > k) {
                rs.pop();
                TreeNode* right_check = curr_right -> left;
                
                while (right_check) {
                    rs.push(right_check);
                    right_check = right_check -> right;
                }
                
            } else {
                return true;
            }
        }

        return false;


        // not the most optimal answer O(n + n);
        if (root == nullptr) return false;

        stack<TreeNode*> s;
        vector<int> sorted;
        TreeNode* curr = root;

        // get the sorted vector

        while (!s.empty() || curr) {
            while (curr) {
                s.push(curr);
                curr = curr -> left;
            }

            curr = s.top(); s.pop();
            sorted.push_back(curr -> val);

            curr = curr -> right;
        }

        int len = sorted.size();

        // two pointer

        int left = 0;
        int right = len - 1;

        while (left < right) {
            int curr_sum = sorted[left] + sorted[right];

            if (curr_sum < k) {
                left++;
            } else if (curr_sum > k) {
                right--;
            } else {
                return true;
            }
        }

        return false;
    }
};