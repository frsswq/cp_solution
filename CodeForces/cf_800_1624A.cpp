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
        int n;
        cin >> n;

        ll max_num = LLONG_MIN, min_num = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            if (x > max_num) {
                max_num = x;
            } 
            
            if (x < min_num) {
                min_num = x;
            }
        }

        cout << max_num - min_num << endl;
    }   

    return 0;
}