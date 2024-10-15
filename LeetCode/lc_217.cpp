#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> a;

        for (int& num : nums) {
            if (a[num] > 0) {
                return true;
            }

            a[num]++;
        }

        return false;
    }
};