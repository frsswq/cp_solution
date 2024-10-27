#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        // fibonacci number
        if (n <= 3) {
            return n;
        }

        int prev0 = 0;
        int prev1 = 1;

        int curr = 0;

        for (int i = 1; i <= n; i++) {
            curr = prev1 + prev0;
            prev0 = prev1;
            prev1 = curr;
        }

        return curr;
    }
};