#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len_a = haystack.size();
        int len_b = needle.size();

        for (int i = 0; i <= len_a - len_b; i++) {
            string check = haystack.substr(i, len_b);
            if (needle == check) {
                return i;
            }
        }

        return -1;
    }
};