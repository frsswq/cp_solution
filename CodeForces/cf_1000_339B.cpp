#include <bits/stdc++.h>

using ll = long long;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<int> a(m);

    for (int& num : a) {
        cin >> num;
    }

    ll steps = 0;
    ll curr = 1;

    for (int i = 0; i < m; i++) {
        if (curr < a[i]) {
            steps += abs(a[i] - curr);
            curr = a[i];
        } else if (curr > a[i]) {
            steps += abs(n + a[i] - curr);
            curr = a[i];
        }
    }

    cout << steps << endl;

    return 0;
}