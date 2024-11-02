#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> h = height;

        if (h.empty()) return 0;

        int l = 0, r = h.size() - 1;
        int max_l = h[l], max_r = h[r];
        int sum = 0;

        while (l < r) {
            if (max_l < max_r) {
                l++;
                max_l = max(max_l, h[l]);
                sum += max_l - h[l];
            } else {
                r--;
                max_r = max(max_r, h[r]);
                sum += max_r - h[r];
            }
        }

        return sum;
    }
};