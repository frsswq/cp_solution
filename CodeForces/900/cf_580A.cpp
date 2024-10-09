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

    vector<ll> a(n);

    for (ll& num : a) {
        cin >> num;
    }

    ll counter = 1;
    ll max_counter = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            counter++;
            max_counter = max(counter, max_counter);
        } else {
            counter = 1;
        }
    }

    cout << max_counter;

    return 0;
}