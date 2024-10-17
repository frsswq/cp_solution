#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if (n < 10) {
            cout << n << endl;
            continue;
        }

        if (n > 45) {
            cout << -1 << endl;
            continue;
        }

        int sum = 0;
        vector<int> a, b;

        for (int i = 9; i > 0; i--) {
            if (sum < n) {
                sum += i;
                a.push_back(i);
            }
        }

        int len = a.size() - 1;

        while (sum > n) {
            sum--;
            a[len]--;
        }

        for (int i = len; i >= 0; i--) {
            cout << a[i];
        }

        cout << endl;
    }   

    return 0;
}