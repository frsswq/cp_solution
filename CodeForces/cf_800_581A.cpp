#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int diff = 0;
    int same = 0;

    while(a >= 1 && b >= 1) {
        a--;
        b--;
        diff++;
    }

    a > b ? same = a / 2 : same = b / 2;

    cout << diff << " " << same << endl;

    return 0;
}