#include <bits/stdc++.h>

void gunung (int n) {
    using namespace std;

    if (n == 1) {
        cout << "*\n";
        return;
    }

    gunung(n - 1);

    for (int i = 0; i < n; i++) {
        cout << "*";
    }

    cout << "\n";

    gunung(n - 1);
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    gunung(n);


    return 0;
}

















