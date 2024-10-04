#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll counter = 0;

    // my solution : pretty much primitive solution

    if (n >= 100 && n % 100 == 0) {
        cout << n / 100 << endl;
        return 0;
    } else if (n >= 100) {
        counter += n / 100;
        n %= 100;
    }

    if (n >= 20 && n % 20 == 0) {
        cout << (n / 20 + counter) << endl;
        return 0;
    } else if (n >= 20) {
        counter += n / 20;
        n %= 20;
    }

    if (n >= 10 && n % 10 == 0) {
        cout << (n / 10 + counter) << endl;
        return 0;
    } else if (n >= 10) {
        counter += n / 10;
        n %= 10; 
    }

    if (n >= 5 && n % 5 == 0) {
        cout << (n / 5 + counter) << endl;
        return 0;
    } else if (n >= 5) {
        counter += n / 5;
        n %= 5; 
    }

    if (n != 0) {
        counter += n;
    }

    cout << counter << endl;

    // claude solution : way better

    // vector<int> bills = {100, 20, 10, 5, 1};

    // for (int i = 0; i < 5; i++) {
    //     counter += n / bills[i];
    //     n %= bills[i];
    // }

    // cout << counter << endl;

    return 0;
}