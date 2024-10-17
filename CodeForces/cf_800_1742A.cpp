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
        vector<int> a(3);

        for (int& num : a) {
            cin >> num;
        }

        sort(a.begin(), a.end());

        cout << (a[0] + a[1] == a[2] ? "YES" : "NO") << endl;
    }   

    return 0;
}