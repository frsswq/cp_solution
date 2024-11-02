#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty()) return {};

        vector<string> res;
        int prev = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (((long long)nums[i] - (long long)nums[i - 1]) > 1) {
                if (nums [i - 1] != prev) {
                    // string n1 = to_string(prev);
                    // string n2 = to_string(nums[i - 1]);
                    res.push_back(to_string(prev) + "->" + to_string(nums[i - 1]));
                } else {
                    res.push_back(to_string(prev));
                }
                prev = nums[i];
            }
        }

        if (nums[nums.size() - 1] != prev) {
            // string n1 = to_string(prev);
            // string n2 = to_string(nums[nums.size() - 1]);
            res.push_back(to_string(prev) + "->" + to_string(nums[nums.size() - 1]));
        } else {
            res.push_back(to_string(prev));
        }

        return res;
    }
};