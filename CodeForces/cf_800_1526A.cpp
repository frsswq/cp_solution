#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

using ll = long long;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        n *= 2;

        vector<ll> a(n);

        for (ll& num : a) {
            cin >> num;
        }

        sort(a.begin(), a.end());

        // split the vector

        vector<ll> b(n / 2), c;

        // b for small, c for big
        // add 1 more size for c if the n odd

        if (n % 2 != 0) {
            c.resize(n / 2 + 1);
        } else {
            c.resize(n / 2);
        }

        for (int i = 0; i < n / 2; i++) {
            b[i] = a[i];
        }

        if (n % 2 == 0) {
            for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
                c[i] = a[j];
            }
        } else {
            for (int i = 0, j = n - 1; i <= n / 2; i++, j--) {
                c[i] = a[j];
            }
        }

        for (int i = 0; i < n / 2; i++) {
            cout << b[i] << " " << c[i] << " ";
        }

        if (n % 2 != 0) {
            cout << c[c.size() - 1];
        }

        cout << endl;
    }   

    return 0;
}