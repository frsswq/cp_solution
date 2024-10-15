#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        unordered_map<int, int> a;

        for (int i = 0; i < len; i++) {
            int complement = target - nums[i];
            if (a.find(complement) != a.end()) {
                return {a[complement], i};
            }

            a.insert({nums[i], i});
        }

        return {};
    }
};