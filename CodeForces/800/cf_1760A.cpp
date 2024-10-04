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
        int a, b, c;
        cin >> a >> b >> c;

        int x = max({a, b, c});
        int y = min({a, b, c});
        int z = a + b + c;

        cout << z - x - y << endl;

        // vector<int> a(3);
        // for (int& num :a) {
        //     cin >> num;
        // }

        // sort(a.begin(), a.end());

        // cout << a[1] << endl;
    }

    return 0;
}