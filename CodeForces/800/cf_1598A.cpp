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

        string a, b;
        cin >> a >> b;

        bool isValid = true;

        for (int i = 0; i < n; i++) {
            int num_a = a[i] - '0';
            int num_b = b[i] - '0';
            if (num_a + num_b == 2) {
                isValid = false;
                break;
            }
        }

        cout << (isValid ? "YES" : "NO") << endl;
    }   

    return 0;
}