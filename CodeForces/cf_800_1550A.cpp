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

        int res = 1;

        while (pow(res, 2) < n) {
            res++;
        }

        cout << res << endl;
    }

    return 0;
}