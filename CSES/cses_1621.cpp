#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

// O(n log n) using set

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<ll> a;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        a.insert(x);
    }

    cout << a.size() << endl;

    return 0;
}

// O (n) using hashmap

// int main () {
//     using namespace std;
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     unordered_map<ll, ll> a;

//     for (int i = 0; i < n; i++) {
//         ll x;
//         cin >> x;

//         a[x]++;
//     }

//     cout << a.size() << endl;

//     return 0;
// }