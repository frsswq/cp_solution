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

    while(t--) {
        int n, h;
        cin >> n >> h;

        ll sum = 0;
        vector<ll> a(n);

        for (ll& num : a) {
            cin >> num;
            sum += num;
        }

        if (sum <= h) {
            cout << n << endl;
            continue;
        }

        int counter = 0;

        sort(a.rbegin(), a.rend());

        for (int i = 0; i < n; i++) {
            h -= a[i];
            counter++;

            if (h <= 0) {
                break;
            }
        }

        cout << counter << endl;

    }    

    return 0;
}