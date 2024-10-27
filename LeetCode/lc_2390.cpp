#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeStars(string s) {
        // it's slow
        stack<char> a;
        int len = s.size();

        for (int i = 0; i < len; i++) {
            if (s[i] == '*') {
                a.pop();
            } else {
                a.push(s[i]);
            }
        }
        
        string res = "";
        while (!a.empty()) {
            res += a.top();
            a.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};