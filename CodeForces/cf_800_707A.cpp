#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int counter = n * m;

    for (int i = 0; i < counter; i++) {
        char c;
        cin >> c;

        if (c != 'W' && c != 'B' && c != 'G') {
            cout << "#Color" << endl;
            return 0;
        }
    }

    cout << "#Black&White" << endl;

    return 0;
}