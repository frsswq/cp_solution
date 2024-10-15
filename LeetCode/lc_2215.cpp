#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> a, b;
        vector<vector<int>> x(2);

        for (int& num : nums1) {
            a[num]++;
        }

        for (int& num : nums2) {
            b[num]++;
        }

        for (const auto& pair : a) {
            if (b.find(pair.first) == b.end()) {
                x[0].push_back(pair.first);
            }
        }

        for (const auto& pair : b) {
            if (a.find(pair.first) == a.end()) {
                x[1].push_back(pair.first);
            }
        }

        return x;

    }
};