#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int multipleOf (int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << multipleOf(n) << endl;

    return 0;
}