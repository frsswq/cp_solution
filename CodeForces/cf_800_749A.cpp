#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    cout << n / 2 << endl;

    int counter = n / 2;

    if (n % 2 != 0) {
        for (int i = 0; i < counter - 1; i++) {
            cout << 2 << " ";
        }

        cout << 3;
    } else {
        for (int i = 0; i < counter; i++) {
            cout << 2 << " ";
        }
    }

    return 0;
}