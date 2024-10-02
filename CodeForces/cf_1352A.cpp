#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

// make function to sort the number by first digit (i ask claude for this)
// it doesn't matter lmao

// int firstDigit (int num) {
//     while (num >= 10) num /= 10;

//     return num;
// }

// bool firstDigitChecker (int a, int b) {
//     int digitA = firstDigit(a);
//     int digitB = firstDigit(b);

//     return digitA < digitB;
// }

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> a;
        int zero = 0;
        ll temp = n;

        while (temp != 0) {
            if (temp % 10 != 0) {
                a.push_back((temp % 10) * pow(10, zero));
            }
            temp /= 10;
            zero++;
        }

        // sort(a.begin(), a.end(), firstDigitChecker);

        cout << a.size() << endl;
        for (ll num : a) {
            cout << num << " ";
        }

        cout << endl;
    }

    return 0;
}