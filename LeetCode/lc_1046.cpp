#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap;

        for (int n : stones) {
            max_heap.push(n);
        }

        while (max_heap.size() > 1) {
            int f = max_heap.top(); max_heap.pop();
            int s = max_heap.top(); max_heap.pop();

            if (s < f) max_heap.push(f - s);
        }

        return max_heap.empty() ? 0 : max_heap.top();
    }
};