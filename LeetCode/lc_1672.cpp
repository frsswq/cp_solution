#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = 0;
        for (vector<int> account : accounts) {
            int sums = 0;
            for (int& num : account) {
                sums += num;
            }

            if (sums > max_sum) {
                max_sum = sums;
            }
        }

        return max_sum;
    }
};