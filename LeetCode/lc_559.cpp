#include <bits/stdc++.h>

using namespace std;

// definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    int maxDepth(Node* root) {
        // dfs
        if (root == nullptr) return 0;
        
        stack<pair<Node*, int>> s;
        s.push({root, 1});
        int max_lvl = 0;

        while (!s.empty()) {
            auto [curr, lvl] = s.top(); s.pop();

            for (Node* node : curr -> children) {
                s.push({node, lvl + 1});
            }

            max_lvl = max(max_lvl, lvl);
        }

        return max_lvl;

        // bfs
        if (root == nullptr) return 0;
        
        queue<Node*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int node_num = q.size();
            
            for (int i = 0; i < node_num; i++) {
                Node* curr = q.front();
                q.pop();

                for (Node* node : curr -> children) {
                    q.push(node);
                }
            }

            level++;
        }

        return level;
    }
};