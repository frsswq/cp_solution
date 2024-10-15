#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> a;
        
        for (int& num : nums) {
            a[num]++;
        }

        for (const auto& pair : a) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return -1;
    }
};