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

bool primeChecker (int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    bool isTrue = false;

    for (int i = x + 1; i <= y; i++) {
        if (primeChecker(i)) {
            isTrue = (i == y);
            break;
        }
    } 

    cout << (isTrue ? "YES" : "NO") << endl;

    return 0;
}