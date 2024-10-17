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

    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        if (n == 1) {
            cout << 1 << " " << 1 << endl;
            continue;
        }

        ll max_ceil = ceil(sqrt(n));

        // find the middle

        ll middle = pow(max_ceil, 2) + 1 - max_ceil;

        if (n == middle) {
            cout << max_ceil << " " << max_ceil << endl;
            continue;
        }

        if (n < middle) {
            // cari kiri, kanan = max_ceil
            ll start = pow(max_ceil - 1, 2);
            ll diff = abs(n - start);

            cout << diff << " " << max_ceil << endl;
        } else {
            // cari kanan, kiri = max_ceil
            ll end = pow(max_ceil, 2) + 1;
            ll diff = abs(n - end);

            cout << max_ceil << " " << diff << endl;
        }

    }

    return 0;
}