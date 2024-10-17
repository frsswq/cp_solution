#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int a1, a2, b1, b2, f1, f2;
        cin >> a1 >> a2 >> b1 >> b2 >> f1 >> f2;

        int distance = abs(a1 - b1) + abs(a2 - b2);

        // obstacle check
        if (f1 == a1 && f1 == b1) {
            int low = min(a2, b2);
            int high = max(a2, b2);

            if (f2 > low && f2 < high) {
                distance += 2;
            }
            
        } else if (f2 == a2 && f2 == b2) {
            int low = min(a1, b1);
            int high = max(a1, b1);

            if (f1 > low && f1 < high) {
                distance += 2;
            }
        }

        cout << distance << "\n";
    }

    return 0;
}