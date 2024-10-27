#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int len = nums.size();

        for (int i = 0; i < len; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        // queue<int> q;

        // for (int i = 0; i < len; i++) {
        //     if (nums[i] != val) {
        //         k++;
        //     } else {
        //         q.push(i);
        //     }

        //     if (!q.empty() && nums[i] != val) {
        //         int val_index = q.front();
        //         q.pop();

        //         swap(nums[val_index], nums[i]);
        //         q.push(i);
        //     }
        // }

        return k;
    }
};