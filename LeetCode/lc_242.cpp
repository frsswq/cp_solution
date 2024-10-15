#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> a;

        for (char c : s) {
            a[c]++;
        }

        for (char c : t) {
            a[c]--;
        }

        for (const auto pair : a) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;

        // lmao double sorting

        // std::sort(s.begin(), s.end());
        // std::sort(t.begin(), t.end());

        // return s == t;
    }
};