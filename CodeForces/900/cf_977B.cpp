#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<string, int> a;

    for (int i = 0; i < n - 1; i++) {
        // string x;
        // char y = s[i];
        // char z = s[i + 1];

        // x += y;
        // x += z;

        // a[x]++;

        // better use substr

        string x = s.substr(i, 2);
        a[x]++;
    }

    int max = 0;
    string maz;

    for (const auto& pair : a) {
        if (pair.second > max) {
            max = pair.second;
            maz = pair.first;
        }
    }

    cout << maz << endl;


    return 0;
}