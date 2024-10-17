#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int& num : a) {
        cin >> num;
    }

    int left = 0, right = n - 1, sereja = 0, dima = 0, counter = 0;

    while(left <= right) {
        debug(a[left], a[right]);
        if (counter % 2 == 0) {
            if (a[left] > a[right]) {
                sereja += a[left];
                left++;
            } else {
                sereja += a[right];
                right--;
            }
        } else {
            if (a[left] > a[right]) {
                dima += a[left];
                left++;
            } else {
                dima += a[right];
                right--;
            }
        }

        debug(sereja, dima);

        counter++;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}