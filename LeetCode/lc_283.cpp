#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // top speed approach - not mine
        // kinda genius ngl
        int j = 0;
        int len = nums.size();

        for (int i = 0; i < len; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }


        // bruh its too slow
        // int len = nums.size();
        // int left = 0;

        // // multi-swap from left to right

        // for (int i = 0; i < len - 1; i++) {
        //     int right = i + 1;

        //     if (nums[i] == 0) {
        //         while (nums[right] == 0 && right < len - 1) {
        //             right += 1;
        //         }

        //         if (nums[i] == 0 && nums[right] != 0) {
        //             swap(nums[i], nums[right]);
        //         }
        //     } else {
        //         while (nums[right] != 0 && right < len - 1) {
        //             right += 1;
        //         }

        //         if (nums[right] != 0 && nums[left] == 0) {
        //             swap(nums[i], nums[right]);
        //         }
        //     }            
        // }
    }
};