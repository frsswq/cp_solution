#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int distance = 0;

    for (int i = 0; i < 25; i++) {
        int index_a = s.find('A' + i);
        int index_b = s.find('A' + i + 1);

        distance += abs(index_a - index_b);
    }

    cout << distance << endl;

    return 0;
}