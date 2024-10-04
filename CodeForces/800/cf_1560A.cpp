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

    while(t--) {
        int n;
        cin >> n;

        int skipThree = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 10 == 3 || i % 3 == 0) {
                skipThree++;
                n++;
                continue;
            }

            skipThree++;
        }

        cout << skipThree << endl;
    }


    return 0;
}