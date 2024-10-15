#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        // two pointer
        int left = 0;
        int right = s.size() - 1;

        string vowels = "aiueoAIUEO";

        while(left < right) {
            while (left < right && vowels.find(s[left]) == string::npos) {
                left++;
            }

            while (left < right && vowels.find(s[right]) == string::npos) {
                right--;
            }

            swap(s[left], s[right]);
            left++;
            right--;
        }

        return s;
        
        // vector<char> a;
        // vector<int> b;

        // string vowels = "aiueoAIUEO";

        // for (int i = 0; i < s.size(); i++) {
        //     if (vowels.find(s[i]) != string::npos) {
        //         a.push_back(s[i]);
        //         b.push_back(i);
        //     }
        // }

        // int left = 0;
        // int right = a.size() - 1;
        // int len = a.size();

        // while(left < len) {
        //     s[b[left]] = a[right];
        //     left++;
        //     right--;
        // }

        // return s;
    }
};