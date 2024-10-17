#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

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

    ll sum = 1;
    ll pyramid = 1;
    ll head = 1;

    while(pyramid < n) {
        head++;
        sum += head * 2 - head;
        pyramid += sum;
    }

    cout << (pyramid > n ? head - 1 : head) << endl;

    return 0;
}