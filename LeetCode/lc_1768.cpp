#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        int max_len = max(len1, len2);

        string s = "";

        for (int i = 0; i < max_len; i++) {
            if (i < len1) {
                s += word1[i];
            }

            if (i < len2) {
                s += word2[i];
            }
        }

        return s;
    }
};