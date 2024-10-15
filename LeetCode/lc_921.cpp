#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        // find the match of '(' with ')'
        int len = s.size();
        int count_opening = 0;
        int valid_found = 0;

        for (char c : s) {
            if (c == '(') {
                count_opening++;
            }

            if (c == ')' && count_opening > 0) {
                count_opening--;
                valid_found += 2;
            }
        }

        return len - valid_found;
    }
};