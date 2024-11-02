#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> max_heap;

        for (int i = 0; i < score.size(); i++) {
            max_heap.push({score[i], i});
        }

        int rank = 1;
        vector<string> placement(score.size());

        while (!max_heap.empty()) {
            auto [num, index] = max_heap.top();
            max_heap.pop();

            switch (rank) {
                case 1: placement[index] = "Gold Medal"; break;
                case 2: placement[index] = "Silver Medal"; break;
                case 3: placement[index] = "Bronze Medal"; break;
                default: placement[index] = to_string(rank);
            }

            rank++;
        }

        return placement;
    }
};