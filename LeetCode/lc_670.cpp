#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);

        int left = 0;
        while (left < s.size() - 1) {
            int right = left + 1;
            int target = s[left] - '0';
            int max_num = 0;
            int max_index = 0;

            while (right < s.size()) {
                int current = s[right] - '0';

                if (current >= max_num) {
                    max_num = current;
                    max_index = right;
                }

                right += 1;
            }

            if (target < max_num) {
                swap(s[left], s[max_index]);
                break;
            }

            left += 1;
        }

        return stoi(s);
    }
};