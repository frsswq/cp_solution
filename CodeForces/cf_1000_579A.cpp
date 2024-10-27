#include <bits/stdc++.h>

using ll = long long;

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

    ll n;
    cin >> n;

    ll counter = 0;

    // bitmask solution
    // move from right to left add counter for every 1

    while (n > 0) {
        if (n & 1) counter++;
        n >>= 1;
    }

    // while (n != 0) {
    //     ll power = 1;

    //     while (pow(2, power) <= n) {
    //         power++;
    //     }

    //     ll last_num = pow(2, power - 1);
    //     n -= last_num;
    //     counter++;
    // }

    cout << counter << endl;

    return 0;
}