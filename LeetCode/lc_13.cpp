#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> a;

        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;

        int x = 0;

        for (int i = 0; i < s.size(); i++) {
            if (a[s[i]] < a[s[i+1]]) {
                x -= a[s[i]];
            } else {
                x += a[s[i]];
            }
        }

        return x;
    }
};