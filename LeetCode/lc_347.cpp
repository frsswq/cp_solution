#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // count the occurence of every number
        unordered_map<int, int> counter;

        for (int& num : nums) {
            counter[num]++;
        }

        // make 2D array for storing the element
        vector<vector<int>> occ(nums.size() + 1); // + 1 since it's 0 indexed

        for (const auto& pair : counter) {
            occ[pair.second].push_back(pair.first);
        }

        vector<int> result;

        for (int i = occ.size() - 1; i >= 1; i--) {
            for (int& num : occ[i]) {
                result.push_back(num);

                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};