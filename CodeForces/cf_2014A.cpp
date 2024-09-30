#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define int long long

int32_t main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        
        int counter = 0;
        int gold_held = 0;
        vector<int> a(n);

        for (int& num : a) {
            cin >> num;
            if (num >= k) {
                gold_held += num;
            }

            if (num == 0 && gold_held > 0) {
                counter++;
                gold_held--;
            }
        }

        cout << counter << "\n";
    }

    return 0;
}