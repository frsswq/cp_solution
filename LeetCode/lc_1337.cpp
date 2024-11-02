#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();

        priority_queue<pair<int, int>> max_heap;

        for (int i = 0; i < row; i++) {
            int count = 0;
            for (int j = 0; j < col; j++) {
                if (mat[i][j] == 1) {
                    count++;
                } else {
                    break;
                }
            }

            max_heap.push({count, i});

            if (max_heap.size() > k) {
                max_heap.pop();
            }
        }

        vector<int> res;

        while (!max_heap.empty()) {
            res.push_back(max_heap.top().second);
            max_heap.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};