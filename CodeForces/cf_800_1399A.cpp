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

        for (int& num : a) {
            cin >> num;
        }

        sort(a.begin(), a.end());

        bool isValid = true;

        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i + 1] - a[i]) > 1) {
                isValid = false;
                break;
            } 
        }

        cout << (isValid ? "YES" : "NO") << endl;
    }   

    return 0;
}