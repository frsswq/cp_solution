#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> a;
        for (int i = 1; i <= n; i++) {
            i % 3 == 0 && i % 5 == 0 ? a.push_back("FizzBuzz") :
            i % 3 == 0 ? a.push_back("Fizz") :
            i % 5 == 0 ? a.push_back("Buzz") :
            a.push_back(to_string(i));
        }

        return a;
    }
};