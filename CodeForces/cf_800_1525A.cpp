#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        // better solution would be check gdc of (100, n)
        // cout << 100 / gcd(100, n) << endl;

        if (100 % n == 0) {
            cout << 100 / n << endl;
            continue;
        }

        int water = 100 - n;

        if (n % 2 == 0) {
            while (n % 2 == 0 && water % 2 == 0) {
                n /= 2;
                water /= 2;
            }
        } 
        
        if (n % 5 == 0) {
            while (n % 5 == 0 && water % 5 == 0) {
                n /= 5;
                water /= 5;
            }
        }

        cout << n + water << endl;
    }   

    return 0;
}