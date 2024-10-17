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
        int n;
        cin >> n;

        vector<int> a(n);

        int sum = 0;
        
        for (int& num : a) {
            cin >> num;
            sum += num;
        }

        if (sum == n) {
            cout << 0 << endl;
            continue;
        }

        if (sum > n) {
            cout << sum - n << endl;
            continue;
        }

        if (sum < n) {
            cout << 1 << endl;
            continue;
        }
    }
    
    return 0;
}