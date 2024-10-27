#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i_s = 0;
        int i_t = 0;

        while (i_s < s.size() && i_t < t.size()) {
            if (s[i_s] == t[i_t]) {
                i_s++;
            }
            i_t++;
        }

        return s.size() == i_s;

        // bad solution
        // if (s.empty() && !t.empty()) {
        //     return true;
        // }

        // if (s.empty() && t.empty()) {
        //     return true;
        // }

        // vector<size_t> index;
        // for (char c : s) {
        //     if (t.find(c) != string::npos) {
        //         index.push_back(t.find(c));
        //     } else {
        //         return false;
        //     }
        // }

        // for (int i = 0; i < index.size() - 1; i++) {
        //     if (index[i + 1] < index[i]) {
        //         return false;
        //     }
        // }

        // return true;
    }
};