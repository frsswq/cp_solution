#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for (int& num : nums) {
            int temp = num;
            num += sum;
            sum += temp;
        }

        return nums;
    }
};