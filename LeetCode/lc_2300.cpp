#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res(spells.size());
        sort(potions.begin(), potions.end());

        for (int i = 0; i < spells.size(); i++) {
            int left = 0;
            int right = potions.size() - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                long long val = (long long) potions[mid] * spells[i];

                if (val >= success) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            res[i] = (potions.size() - left);
        }


        return res;
    }
};