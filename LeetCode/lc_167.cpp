#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        int left = 0;
        int right = len - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum > target) {
                right -= 1;
            } else if (sum < target) {  
                left += 1;
            } else {
                return {left + 1, right + 1};
            }
        }
        
        // hash map in C++
        // unordered_map<int, int> a;
        // int len = numbers.size();

        // for (int i = 0; i < len; i++) {
        //     int check_num = target - numbers[i];
        //     auto check = a.find(check_num);
        //     if (check != a.end()) {
        //         return {check -> second + 1, i + 1};
        //     }
        //     a[numbers[i]] = i;
        // }

        return {};
    }
};
