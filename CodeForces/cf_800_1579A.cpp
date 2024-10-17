#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int count_a = 0;
        int count_b = 0;
        int count_c = 0;

        for (char c : s) {
            if (c == 'A') {
                count_a++;
            } else if (c == 'B') {
                count_b++;
            } else if (c == 'C') {
                count_c++;
            }
        }

        if (count_a + count_c == count_b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        // editorial solution (simpler)

        // cout << (count(s.begin(), s.end(), 'B') * 2 == s.size() ? "YES" : "NO") << endl;
    }

    return 0;
}