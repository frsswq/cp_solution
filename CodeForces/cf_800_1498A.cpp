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

ll gcdChecker (ll n) {
    using namespace std;
    
    ll digit_sum = 0;
    ll temp_n = n;

    while (temp_n > 0) {
        digit_sum += temp_n % 10;
        temp_n /= 10; 
    }

    while (n > 0 && digit_sum > 0) {
        n > digit_sum ? n = n % digit_sum : digit_sum = digit_sum % n;
    }

    return max(n, digit_sum);
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        while(gcdChecker(n) == 1) {
            n++;
        }

        cout << n << endl;
    }   

    return 0;
}