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

        vector<int> a;
        vector<int> b;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            i % 2 != 0 ? a.push_back(x) : b.push_back(x);
        }

        

        
        ll sum_a = accumulate(a.begin(), a.end(), 0);
        ll sum_b = accumulate(b.begin(), b.end(), 0);


        cout << (sum_a == sum_b ? "YES" : "NO") << endl;
    }
    

    return 0;
}