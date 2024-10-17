#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    sum = max(sum, (a + b) * c);
    sum = max(sum, a * (b + c));
    sum = max(sum, a * b * c);

    cout << sum << endl;

    return 0;
}