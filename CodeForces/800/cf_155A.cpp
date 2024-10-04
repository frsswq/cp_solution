#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll temp;
    cin >> temp;
    ll max = temp;
    ll min = temp;
    int counter = 0;

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;

        if (x > max) {
            max = x;
            counter++;
        } else if (x < min) {
            min = x;
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}