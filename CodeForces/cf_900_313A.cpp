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

    if (n >= 0) {
        cout << n << '\n';
        return 0;
    }

    if (n >= -10) {
        cout << 0 << '\n';
        return 0;
    }

    ll last_digit = (n % 10) * - 1;
    ll before_last_digit = ((n / 10) % 10) * - 1;

    debug(last_digit, before_last_digit);

    if (last_digit < before_last_digit) {
        n /= 10;
        n += abs(last_digit - before_last_digit);
        cout << n << endl;
    } else {
        n /= 10;
        cout << n << endl;
    }

    return 0;
}