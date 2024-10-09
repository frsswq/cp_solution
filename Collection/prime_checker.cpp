#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

bool isPrime (ll n) {
    if (n <= 3) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}