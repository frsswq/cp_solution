#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    if (n < m) {
        cout << -1 << endl;
        return 0;
    }

    int max_step = n;
    int min_step = ceil(n * 1.0 / 2);

    // min_step = ((min_step + m - 1) / m) * m;

    min_step = ceil(min_step * 1.0 / m) * m;

    // while (min_step % m != 0 && min_step < max_step) {
    //     min_step++;
    // }

    cout << (min_step % m == 0 ? min_step : -1) << endl;

    return 0;
}