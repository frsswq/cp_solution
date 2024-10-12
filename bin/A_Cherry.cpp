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

        vector<ll> a(n);

        for (ll& num : a) {
            cin >> num;
        }

        if (n == 2) {
            cout << a[0] * a[1] << endl;
            continue;
        }

        ll sum = 0;

        // naive approach
    
        // for (int i = 0; i < n - 1; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         ll max_num = *max_element(a.begin() + i, a.begin() + j + 1);
        //         ll min_num = *min_element(a.begin() + i, a.begin() + j + 1);

        //         ll sum_num = max_num * min_num;

        //         sum = max(sum, sum_num);
        //     }
        // }

        for (int i = 0; i < n - 1; i++) {
            sum = max(sum, a[i] * a[i + 1]);
        }

 
        cout << sum << endl;
    }   

    return 0;
}