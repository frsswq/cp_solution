#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

// attempts number 2
// highest number to the left
// lowest number to the right
// index of lowest number > highest number = 
// no need to calculate for swapping complexity
// else = add 1 to the counter
// counter = abs(1 - highest number index) +
// abs(last index - lowest number index) + 1;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        a[i] = x;
    }

    int max_index = 0;
    int max_number = 0;
    int min_index = 0;
    int min_number = 100;

    for (int i = 1; i <= n; i++) {
        // find the leftest max number
        if (a[i] > max_number) {
            max_index = i;
            max_number = a[i];
        }

        // find the rightest min number
        if (a[i] <= min_number) {
            min_index = i;
            min_number = a[i];
        }
    }

    int moves = abs(1 - max_index) + abs(n - min_index);

    if (max_index > min_index) moves--;

    cout << moves << endl;

    return 0;
}