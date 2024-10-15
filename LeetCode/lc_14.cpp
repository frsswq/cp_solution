#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      if (strs.empty()) {
        return "";
      }
      
      string s = "";
      int min_string = INT_MAX;

      for (const auto& str : strs) {
        if (str.size() < min_string) {
            min_string = str.size();
        }
      }

      for (int i = 0; i < min_string; i++) {
        char prefix = strs[0][i];

        for (int j = 1; j < strs.size(); j++) {
            if (strs[j][i] != prefix) {
                return s;
            }
        }
        
        s += prefix;
      }

      return s;
    }
};