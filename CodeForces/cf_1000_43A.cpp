#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> a;

    while(n--) {
        string s;
        cin >> s;

        a[s]++;
    }

    int max = 0;
    string team = "";

    // can be more efficient
    for (const auto& pair : a) {
        if (pair.second > max) {
            max = pair.second;
            team = pair.first;
        }
    }

    cout << team << endl;

    return 0;
}