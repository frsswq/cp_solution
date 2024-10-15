#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    // the max for gcd most probably n and n / 2 if its even
    // if input n are odd, the answer just change to (n - 1) / 2

    while(t--) {
        int n;
        cin >> n;

        cout << n / 2 << endl;
    }   

    return 0;
}