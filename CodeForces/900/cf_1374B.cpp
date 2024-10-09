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
        ll n;
        cin >> n;

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        int counter = 0;

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
                counter++;
            } else if (n * 2 % 6 == 0) {
                n *= 2;
                counter++;
            } else {
                counter = -1;
                break;
            }
        }

        cout << counter << endl;
    }   

    return 0;
}