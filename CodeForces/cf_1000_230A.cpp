#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> fight (n);

    for (auto& pair : fight) {
        int x, y;
        cin >> x >> y;

        pair = make_pair(x, y);
    }

    sort(fight.begin(), fight.end());



    for (int i = 0; i < n; i++) {
        if (fight[i].first >= s) {
            cout << "NO" << endl;
            return 0;
        } else {
            s += fight[i].second;
        }
    }

    cout << "YES" << endl;

    return 0;
}
