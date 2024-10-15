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

// bool isPrime (ll n) {
//     if (n <= 3) return true;
//     for (int i = 2; i * i < n; i++) {
//         if (n % i == 0) return false;
//     }

//     return true;
// }

std::set<ll> primeFactor (ll n) {
    using namespace std;
    set<ll> a;

    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            a.insert(i);
        }
    }

    if (n > 1) {
        a.insert(n);
    }

    return a;

    // int divisor = 2;

    // while (n > 1) {
    //     while (n % divisor == 0) {
    //         n /= divisor;
    //         a.insert(divisor);
    //     }

    //     while (!isPrime(divisor) && n % divisor != 0) {
    //         divisor++;
    //     }
    // }

    // return a;
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    set<ll> a = primeFactor(n);

    for (const auto num : a) {
        cout << num << " ";
    }

    return 0;
}