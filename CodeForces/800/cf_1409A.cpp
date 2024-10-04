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

// time complexity: O(1)

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--) {
        ll a, b;
        cin >> a >> b;

        cout << fixed << setprecision(0);
        cout << ceil(abs(a - b) * 1.0 / 10) << endl;
    }

    return 0;
}