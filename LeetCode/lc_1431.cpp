#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candy = *max_element(candies.begin(), candies.end());
        int len = candies.size();

        vector<bool> res;

        for (int& num : candies) {
            if (num + extraCandies >= max_candy) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }

        return res;
    }
};