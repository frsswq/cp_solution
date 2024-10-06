#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

// check for odd number on even index and vice versa;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        // compare the odd and even;
        int odd = 0, even = 0, index = 0;

        for (int& num : a) {
            cin >> num;

            if (num % 2 != index % 2) {
                if (index % 2 == 0) {
                    odd++;
                } else {
                    even++;
                }
            }

            index++;
        }

        if (odd != even) {
            cout << -1 << endl;
            continue;
        }

        cout << odd << endl;
    }

    return 0;
}