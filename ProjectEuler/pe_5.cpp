#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

bool multipleChecker (int n) {
    for (int i = 2; i <= 20; i++) {
        if (n % i != 0) {
            return false;
        }
    }

    return true;
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(!multipleChecker(n)) {
        n++;
    }

    cout << n << endl;

    return 0;
}