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

    int n;
    cin >> n;

    int sum_a = 0;
    int sum_b = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        sum_a += x;
        sum_b += y;
    }

    abs(n - sum_a) < abs(0 - sum_a) ? sum_a = abs(n - sum_a) : sum_a = abs(0 - sum_a);
    abs(n - sum_b) < abs(0 - sum_b) ? sum_b = abs(n - sum_b) : sum_b = abs(0 - sum_b);

    cout << sum_a + sum_b << endl;

    return 0;
}