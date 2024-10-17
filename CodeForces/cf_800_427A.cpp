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

    int available = 0;
    int untreated = 0;

    while (n--) {
        int x;
        cin >> x;

        // i can write this better but i'm very hungry rn

        if (x >= 0) {
            available += x;
        }

        if (available < 1 && x == -1) {
            untreated++;
        }

        if (available != 0 && x == -1) {
            available += x;
        }
        
    }

    cout << untreated << endl;

    return 0;
}