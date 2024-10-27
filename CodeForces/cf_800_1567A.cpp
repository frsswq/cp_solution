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

        string s;
        cin >> s;

        // L R U D
        // Left Right Up Down

        // left and right no need to change
        // up = down, down = up

        for (char& c : s) {
            if (c == 'U') {
                c = 'D';
            } else if (c == 'D') {
                c = 'U';
            }
        }

        cout << s << endl;
    }

    return 0;
}