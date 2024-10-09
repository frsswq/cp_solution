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
        cout << fixed << setprecision(9);

        int n;
        cin >> n;

        vector<ll> a(n);

        for (ll& num : a) {
            cin >> num;
        }
        
        // set first as max;
        int max_num = a[0];
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > max_num) {
                max_num = a[i];
            }

            sum += a[i];
        }

        
        cout << 1.0 * (sum - max_num) / (n - 1) + max_num << endl;
    }   

    return 0;
}