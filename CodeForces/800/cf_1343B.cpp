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

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> a;
        vector<ll> b; 
        ll sum_a = 0, sum_b = 0;

        for (int i = 1; i <= n / 2; i++) {
            ll x = 2 * i;
            sum_a += x;
            a.push_back(x);
        }

        for (int i = 0; i < n / 2 - 1; i++) {
            ll y = 1 + 2 * i;
            sum_b += y;
            b.push_back(y);
        }

        ll z = sum_a - sum_b;

        if (z % 2 != 0 && sum_b != 0) {
            sum_b += z;
            b.push_back(z);
        }

        // print no if not possible
        // print yes with the array if possible

        if (sum_a != sum_b && a.size() != b.size()) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for (ll num : a) {
                cout << num << " ";
            }

            for (ll num : b) {
                cout << num << " ";
            }

            cout << endl;
        }
    }

    return 0;
}