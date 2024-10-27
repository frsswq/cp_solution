#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int total = a + a / b;
    int leftover = total - a + a % b;

    while (leftover >= b) {
        total += leftover / b;
        leftover = leftover / b + leftover % b;
    }

    cout << total << endl;

    return 0;
}