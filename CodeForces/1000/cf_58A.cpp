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

    string s;
    cin >> s;

    string t = "hello";
    int j = 0;

    for (int i = 0; i < s.size() && j < t.size(); i++) {
        if (s[i] == t[j]) {
            j++;
        }
    }

    cout << (j == t.size() ? "YES" : "NO") << endl;

    return 0;
}