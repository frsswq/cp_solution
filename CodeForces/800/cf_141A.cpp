#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c;
    cin >> a >> b >> c;

    string d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    cout << (d == c ? "YES" : "NO") << endl;

    return 0;
}