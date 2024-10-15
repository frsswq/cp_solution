#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // only valid if found the pair
        // closed in correct order

        stack<char> a;
        unordered_map<char, char> b = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (b.find(c) != b.end()) {
                if (a.empty() || a.top() != b[c]) {
                    return false;
                }
                a.pop();
            } else {
                a.push(c);
            }
        }

        return a.empty();



    }
};