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

    int t;
    cin >> t;

    int m = 0, c = 0;

    while(t--) {
        int mishka, chris;
        cin >> mishka >> chris;

        if (mishka == chris) continue;

        mishka > chris ? m += 1 : c += 1;
    }

    debug(m, c);
    cout << (m > c ? "Mishka" : m < c ? "Chris" : "Friendship is magic!^^") << endl;;

    return 0;
}