#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(3);

    for (int& num : a) {
        cin >> num;
    }

    sort(a.begin(), a.end());

    int sum = 0;

    sum += abs(a[1] - a[0]) + abs(a[1] - a[2]);

    cout << sum << endl;

    return 0;
}