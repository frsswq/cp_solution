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

    if (n % 4 == 0 || n % 7 == 0 || n % 74 == 0 || n % 47 == 0) {
        cout << "YES" << endl;
        return 0;
    }

    while(n > 0) {
        int right = n % 10;
        if (right == 4 || right == 7) {
            n /= 10;
            continue;
        } else {
            cout << "NO" << endl;
            return 0;
        }

    }

    cout << "YES" << endl;

    return 0;
}