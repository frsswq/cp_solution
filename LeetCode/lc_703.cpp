#include <bits/stdc++.h>

using namespace std;

class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> min_h;
    int k_;

public:
    KthLargest(int k, vector<int>& nums) {
        k_ = k;
        for (int n : nums) {
            min_h.push(n);

            if (min_h.size() > k_) {
                min_h.pop();
            }
        }
    }
    
    int add(int val) {
        min_h.push(val);

        if (min_h.size() > k_) {
            min_h.pop();
        }

        return min_h.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */