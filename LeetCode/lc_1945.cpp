#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string res = "";

        for (char& c : s) {
            res += to_string((c - 'a') + 1);
        }

        while (k--) {
            int temp = 0;

            for (char& c : res) {
                temp += c - '0';
            }

            res = to_string(temp);
        }

        return stoi(res);        
    }
};