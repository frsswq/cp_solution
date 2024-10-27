#include <bits/stdc++.h>

using ll = long long;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        ll sum = 0;

        if (x == 0 && y == 0) {
            cout << 0 << endl;
            continue;
        }

        ll min_num = min(x, y);
        ll max_num = max(x, y) - min_num;
        ll check_a = a * (x + y);
        ll check_b = min_num * b + max_num * a;

        // use swap to find max
        // if (x < y) {
        //     swap(x, y);
        // }

        sum = min(check_a, check_b);

        cout << sum << endl;
        
    }

    return 0;
}