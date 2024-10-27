#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

using ll = long long;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;
    cin >> n >> t;

    vector<ll> a(n - 1);

    for (ll& num : a) {
        cin >> num;
    }

    ll last_visited = 1;

    while (last_visited < n) {
        if (last_visited == t) {
            cout << "YES" << endl;
            return 0;
        } else {
            last_visited += a[last_visited - 1];
        }
    }

    cout << (last_visited == t ? "YES" : "NO") << endl;

    return 0;
}