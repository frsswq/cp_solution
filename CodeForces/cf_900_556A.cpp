#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;

    cin >> n >> s;

    unordered_map<char, int> a;

    for (char& c : s) {
        a[c]++;
    }

    if (a['0'] == a['1']) {
        cout << 0 << endl;
        return 0;
    }

    int min_c = min(a['0'], a['1']);
    int max_c = max(a['0'], a['1']);

    cout << max_c - min_c << endl;

    return 0;
}