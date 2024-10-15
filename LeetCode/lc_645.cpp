#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        cout << fixed << setprecision(5);
        
        if (nums.empty()) {
            return 0;
        }

        int len = nums.size();
        double windows = 0;

        for (int i = 0; i < k; i++) {
            windows += nums[i];
        }

        double average = windows / k;

        for (int i = 1; i < len - k + 1; i++) {
            windows -= nums[i - 1];
            windows += nums[i + k - 1];

            double current_average = windows / k;
            if (current_average > average) {
                average = current_average;
            }
        }

        return average;
    }
};