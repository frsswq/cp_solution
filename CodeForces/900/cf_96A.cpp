#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int counter = 1;

    for (int i = 0; i < s.size(); i++) {
        if (counter == 7) break;

        if (s[i] == s[i - 1]) {
            counter++;
        } else {
            counter = 1;
        }
    }

    cout << (counter == 7 ? "YES" : "NO") << endl;

    return 0;
}