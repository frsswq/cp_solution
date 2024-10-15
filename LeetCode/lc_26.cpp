#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // not efficent :
        
        // set<int> a(nums.begin(), nums.end());

        // vector<int> b(a.begin(), a.end());
        // int k = a.size();

        // for (int i = a.size() - 1; i < nums.size() - a.size(); i++) {
        //     b.push_back(0);
        // }

        // nums = b;

        // return a.size();

        // efficient (i guess) :

        if (nums.empty()) return 0;

        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};