#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // no less than a
    // no more than b

    int n, a, b;
    cin >> n >> a >> b;
    
    int counter = 0;
    int l = 1;

    for (int i = 1; i <= n; i++) {
        if (i - l <= b && n - i >= a) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}