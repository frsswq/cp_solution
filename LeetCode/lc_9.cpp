#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);

        if (y[0] == '-') {
            return false;
        }

        int left = 0;
        int right = y.size() - 1;

        while(left <= right) {
            if (y[left] != y[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};