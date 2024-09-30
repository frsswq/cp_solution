#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;
    int t;
    cin >> t;

    while (t--) {
        vector<int> a(4);

        for (int &num : a) {
            cin >> num;
        }

        int x = max(a[0], a[1]);
        int y = max(a[2], a[3]);

        sort(a.begin(), a.end(), greater<int>());

        cout << (x + y == a[0] + a[1] ? "YES" : "NO") << endl;
    }

    return 0;
}