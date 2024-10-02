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

    for (int i = 1; i <= n - 1; i++) {
        i % 2 != 0 ? cout << "I hate that " :
        cout << "I love that ";
    }

    cout << (n % 2 != 0 ? "I hate it" : "I love it");

    return 0;
}