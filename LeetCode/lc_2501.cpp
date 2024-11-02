#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int max_count = 0;
        unordered_map<int, int> tracker;
        sort(nums.begin(), nums.end());

        for (int n : nums) {
            tracker[n] = 1;
        }

        for (int n : nums) {
            long long s = (long long) n * n;
            if (s <= INT_MAX &&
                tracker.find(s) != tracker.end()) {
                tracker[s] = tracker[n] + 1;
                max_count = max(max_count, tracker[s]);        
            }
        }

        return max_count >= 2 ? max_count : - 1;
    }
};