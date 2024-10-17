#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> a;

        for (const auto& s : strs) {
            string x = s;
            sort(x.begin(), x.end());
            a[x].push_back(s);
        }

        vector<vector<string>> res;

        for (const auto& pair : a) {
            res.push_back(pair.second);
        }

        return res;

        // time limit exceeded
        // vector<vector<string>> a;
        // vector<bool> check(strs.size(), false);

        // for (int i = 0; i < strs.size(); i++) {
        //     if (check[i]) continue;

        //     vector<string> current;
        //     current.push_back(strs[i]);
        //     check[i] == true;

        //     unordered_map<char, int> char_counter;
            
        //     for (char c : strs[i]) {
        //         char_counter[c]++;
        //     }

        //     for (int j = i + 1; j < strs.size(); j++) {
        //         if (check[j]) continue;

        //         unordered_map<char, int> char_check;

        //         for (char c : strs[j]) {
        //             char_check[c]++;
        //         }

        //         bool isSame = true;

        //         if (char_counter.size() != char_check.size()) {
        //             isSame = false;
        //         } else {
        //             for (const auto& pair : char_counter) {
        //                 if (char_check[pair.first] != pair.second) {
        //                     isSame = false;
        //                     break;
        //                 }
        //             }
        //         }

        //         if (isSame) {
        //             current.push_back(strs[j]);
        //             check[j] = true;
        //         }
        //     }

        //     a.push_back(current);
        // }
  
        // return a;
    }
};