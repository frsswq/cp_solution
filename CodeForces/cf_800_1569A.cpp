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

        string s;
        cin >> s;

        bool found = false;

        for (int i = 0; i < n - 1; i++) {
            // simpler way would be this
            // if (s[i] != s[i + 1]) {
            //     cout << i + 1 << " " << i + 2 << endl;
            //     found = true;
            //     break;
            // }

            if ((s[i + 1] == 'a' && s[i] == 'b') || (s[i + 1] == 'b' && s[i] == 'a')) {
                cout << i + 1 << " " << i + 2 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}