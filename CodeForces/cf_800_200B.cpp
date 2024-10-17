#include <bits/stdc++.h>

using ll = long long;
using ld = long double;

int main () {
    using namespace std;
    int n;
    cin >> n;

    ld sum = 0;

    for (int i = 0; i < n; i++) {
        ld x;
        cin >> x;

        sum += x;
    }

    sum /= n;
    
    cout << std::fixed << setprecision(12) << sum << endl;

    return 0;
}