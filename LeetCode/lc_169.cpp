#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer-Moore Majority Voting
        int count = 0;
        int num = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                num = nums[i];
                count++;
            } else {
                num == nums[i] ? count++ : count--;
            }
        }

        return num;
    }
};