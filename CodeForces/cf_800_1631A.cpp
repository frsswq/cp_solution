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

        vector<int> a(n), b(n);

        for (int& num : a) {
            cin >> num;
        }       

        for (int& num : b) {
            cin >> num;
        }

        for (int i = 0; i < n; i++) {
            if (b[i] > a[i]) {
                swap(b[i], a[i]);
            }
        }

        int max_a = *max_element(a.begin(), a.end());
        int max_b = *max_element(b.begin(), b.end());

        cout << max_a * max_b << endl;
    }

    return 0;
}