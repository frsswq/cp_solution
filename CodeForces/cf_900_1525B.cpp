#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int& num : a) {
            cin >> num;
        }

        if (is_sorted(a.begin(), a.end())) {
            cout << 0 << endl;
            continue;
        }

        if (a[0] == 1 || a[n - 1] == n) {
            cout << 1 << endl;
            continue;
        }

        if (a[0] == n && a[n - 1] == 1) {
            cout << 3 << endl;
            continue;
        }

        cout << 2 << endl;
    }   

    return 0;
}