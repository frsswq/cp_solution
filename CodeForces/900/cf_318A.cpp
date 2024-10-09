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

    // ga ngerti

    ll n, k;
    cin >> n >> k;

    ll mid = (n + 1) / 2;

    if (k > mid) {
        cout << 2 * (k - mid) << endl;
    } else {
        cout << 2 * k - 1 << endl;
    }

    return 0;
}