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

    ll n;
    cin >> n;

    while(n--) {
        ll x, y;
        cin >> x >> y;


        ll max_number = max(x, y);
        ll max_spiral = max_number * max_number;

        if (x == 1 && y == 1) {
            cout << 1 << endl;
            continue;
        }

        if (x == y) {
            cout << max_spiral - (max_number - 1) << endl;
            continue;
        }

        // odd = start from column
        // even = start from row

        if (max_number % 2 != 0 && max_number == y) {
            cout << max_spiral - (x - 1) << endl;
            continue;
        }

        if (max_number % 2 == 0 && max_number == y) {
            cout << ((y - 1) * (y - 1)) + x << endl;
            continue;
        }

        if (max_number % 2 != 0 && max_number == x) {
            cout << ((x - 1) * (x - 1)) + y << endl;
            continue;
        }

        if (max_number % 2 == 0 && max_number == x) {
            cout << max_spiral - (y - 1) << endl;
            continue;
        }

        // let's make it more concise

        if (max_number % 2 == 0) {
            if (max_number == x) {
                cout << max_spiral - (y - 1) << endl;
            } else {
                cout << ((y - 1) * (y - 1)) + x << endl;
            }
        } else {
            if (max_number == x) {
                cout << ((x - 1) * (x - 1)) + y << endl;
            } else {
                cout << max_spiral - (x - 1) << endl;
            }
        }
    }
    
    return 0;
}