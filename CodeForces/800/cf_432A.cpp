#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int counter = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x <= 5 - k) counter++;
    }

    cout << counter / 3 << endl;

    return 0;
}