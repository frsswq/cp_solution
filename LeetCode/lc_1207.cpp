#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> a;

        for (int& num : arr) {
            a[num]++;
        }

        unordered_set<int> b;

        for (const auto& pair : a) {
            if (b.find(pair.second) != b.end()) {
                return false;
            }

            b.insert(pair.second);
        }

        return true;
    }
};