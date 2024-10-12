#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    string s;
    cin >> s;

    for (char& c : s) {
        c += k;

        if (c > 'z') {
            c -= 26;
        }

        c = 'a' + (c - 'a' + k) % 26;
    }

    cout << s << endl;


    return 0;
}