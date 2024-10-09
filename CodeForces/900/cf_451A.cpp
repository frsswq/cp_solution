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

    int min_num = min(n, m);

    cout << (min_num % 2 != 0 ? "Akshat" : "Malvika") << endl;

    return 0;
}