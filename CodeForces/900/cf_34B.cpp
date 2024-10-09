#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int& num : a) {
        cin >> num;
    }

    sort(a.begin(), a.end());

    int sum = 0;

    for (int i = 0; i < m; i++) {
        if (a[i] < 0) {
            sum += a[i] * -1;
        }
    }

    cout << sum << endl;

    return 0;
}