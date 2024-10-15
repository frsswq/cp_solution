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

ll evenFibonacci (ll target) {
    ll third = 0;
    ll first = 1;
    ll second = 2;

    ll sum_even = 2;

    while (third < target) {
        third = first + second;

        if (third % 2 == 0 && third < target) {
            sum_even += third;
        }

        first = second;
        second = third;
    }

    return sum_even;
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << evenFibonacci(n) << endl;

    return 0;
}