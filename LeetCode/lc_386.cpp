#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> a(n);
        int count = 1;

        for (int& num : a) {
            num = count;

            if (count * 10 > n) {
                if (count == n) {
                    count /= 10;
                }              
                count++;
                while (count % 10 == 0) {
                    count /= 10;
                }
            } else {
                count *= 10;
            }
        }

        return a;
    }
};