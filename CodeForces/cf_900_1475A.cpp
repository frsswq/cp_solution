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

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        if (n <= 2) {
            cout << "NO\n";
            continue;
        }

        if (n % 2 != 0) {
            cout << "YES\n";
            continue;
        }

        ll temp = n;
        while(temp % 2 == 0) {
            temp /= 2;
        }

        cout << (temp > 1 ? "YES\n" : "NO\n");
    }

    return 0;
}