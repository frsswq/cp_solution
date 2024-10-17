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

// i read the problem statement wrong lmao, still got right anyway.

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        debug(s[0] - 'a');
        debug(s[1] - 'b');
        debug(s[2] - 'c');

        if ((s[0] - 'a' > 1 ||
        (s[1] - 'b' < - 1 && s[1] - 'b' > 1) || 
        s[2] - 'c' < - 1) && 
        s[0] - 'a' + s[2] - 'c' != 0) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}