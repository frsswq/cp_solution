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

        if (n <= 2 && s != "00" && s != "11") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }   

    return 0;
}