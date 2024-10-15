#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // not really a good code
        
        int len = flowerbed.size();
        if (len == 1) {
            if (flowerbed[0] == 1 && n > 0) {
                return false;
            } else {
                return true;
            }
        }

        for (int i = 0; i < len; i++) {
            if (i == 0) {
                if (flowerbed[i] == 0 && flowerbed[i + 1] == 0 && n > 0) {
                    flowerbed[i] = 1;
                    n--;
                    continue;
                } else {
                    continue;
                }
            } else if (i == len - 1) {
                if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && n > 0) {
                    flowerbed[i] = 1;
                    n--;
                    continue;
                } else {
                    continue;
                }
            }

            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0 && n > 0) {
                flowerbed[i] = 1;
                n--;
            }
        }

        if (n > 0) {
            return false;
        } else {
            return true;
        }

    }
};