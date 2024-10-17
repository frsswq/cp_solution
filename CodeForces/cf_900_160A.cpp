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

    vector<int> a(n);
    int sum = 0;

    for (int& num : a) {
        cin >> num;
        sum += num;
    }

    sort(a.rbegin(), a.rend());

    int counter = 0;
    int current_sum = 0;

    while (current_sum <= sum / 2) {
        current_sum += a[counter];
        counter++;
    }

    cout << counter << endl;

    return 0;
}