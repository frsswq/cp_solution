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

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (n <= 3 && n != 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }


    int odd = ceil(n * 1.0 / 2);
    int even = n - odd;

    for (int i = 1; i <= even; i++) {
        cout << 2 * i << " ";
    }

    for (int i = 1; i <= odd; i++) {
        cout << (2 * i) - 1 << " ";
    }

    return 0;
}