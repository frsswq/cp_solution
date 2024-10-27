#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        int len_a = str1.size(), len_b = str2.size();

        if (len_b > len_a) {
            swap(len_b, len_a);
            swap(str2, str1);
        }

        while (len_b > 0) {
            int temp = len_b;
            len_b = len_a % len_b;
            len_a = temp;
        }

        return str1.substr(0, len_a);
    }
};