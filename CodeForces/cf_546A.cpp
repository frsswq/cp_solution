#include <bits/stdc++.h>

int main () {
    using namespace std;
    int k, n, w;
    int sum = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++) {
        sum+= k * i;
    }

    cout << (n - sum >= 0 ? 0 : abs(sum - n)) << endl;

    return 0;
}