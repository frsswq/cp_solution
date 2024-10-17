#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int time_left = 240 - k;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        int time = 5 * i;
        if (time_left < time) {
            break;
        } else {
            time_left -= time;
            solved++;
        }
    }

    cout << solved << endl;

    return 0;
}