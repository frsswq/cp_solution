#include <bits/stdc++.h>

using ll = long long;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 8, 4, 2, 6

    ll n;
    cin >> n;

    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }

    ll check = n % 4;

    if (check == 0) {
        cout << 6 << endl;
    } else if (check == 1) {
        cout << 8 << endl;
    } else if (check == 2) {
        cout << 4 << endl;
    } else {
        cout << 2 << endl;
    }

    return 0;
}