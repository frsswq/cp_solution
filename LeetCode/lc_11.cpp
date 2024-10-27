#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int> h = heights;
        int max_sum = 0;
        int left = 0;
        int right = h.size() - 1;
        
        while(left < right) {
            int check_sum = min(h[left], h[right]) * (right - left);
            max_sum = max(max_sum, check_sum);

            if (h[left] < h[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_sum;
    }
};
