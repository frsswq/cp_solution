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

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0) {
                    cout << i + 1 << " ";
                } else {
                    cout << i - 1 << " ";
                }
            }
        } else {
            for (int i = 1; i <= n - 3; i++) {
                if (i % 2 != 0) {
                    cout << i + 1 << " ";
                } else {
                    cout << i - 1 << " ";
                }
            }

            cout << n << " " << n - 2 << " " << n - 1; 
        }

        cout << endl;
    }   

    return 0;
}