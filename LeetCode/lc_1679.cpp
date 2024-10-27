#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;
        int counter = 0;
        
        while (left < right) {
            if (nums[left] + nums[right] == k) {
                counter++;
                left++;
                right--;
            } else if (nums[left] + nums[right] < k) {
                left++;
            } else if (nums[left] + nums[right] > k) {
                right--;
            }
        }

        return counter;
    }
};