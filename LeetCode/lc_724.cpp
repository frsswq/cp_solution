#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // not yet completely master this intuitively
        // will come back again later
        
        int len = nums.size();
        int left_sum = 0;
        int sum = accumulate(nums.begin(),nums.end(), 0);

        for (int i = 0; i < len; i++) {
            /* alternative
            int current_sum = left_sum + nums[i];
            if (left_sum == sum - current_sum) {
                return i;
            }
            */

            if (left_sum == sum - left_sum - nums[i]) {
                return i;
            }

            left_sum += nums[i];
        }

        return -1;
    }
};