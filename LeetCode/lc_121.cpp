#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Neetcode-like approach
        int max_sum = 0;
        int min_num = prices[0];

        for (int num : prices) {
            if (num > min_num) {
                max_sum = max(max_sum, num - min_num);
            } else {
                min_num = num;
            }
        }

        return max_sum;
        
        // int max_sum = 0;
        // int min_num = INT_MAX;

        // for (int num : prices) {
        //     min_num = min(num, min_num);

        //     max_sum = max(max_sum, num - min_num);
        // }
        
        // return max_sum;
    }
};