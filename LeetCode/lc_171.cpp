#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        // more efficient
        int sum = 0;

        for (char c : columnTitle) {
            sum = sum * 26 + (c - 'A' + 1); // c - 'Z' + 26;
        }

        return sum;

        // int len = columnTitle.size();
        // int sum = 0;

        // for (int i = 0; i < len; i++) {
        //     int num = columnTitle[i] - 'Z' + 26;
        //     sum += num * (pow(26, i));
        // }
    }
};