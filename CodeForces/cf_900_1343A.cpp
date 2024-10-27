#include <bits/stdc++.h>

using ll = long long; 

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll divisor = 3;
        ll power = 2;

        while (n % divisor != 0) {
            divisor += pow(2, power);
            power++;
        }

        // editorial

        // ll divisor = 0;
        // for (int i = 2; i < 30; i++) {
        //     divisor = pow(2, i) - 1;
        //     if (n % divisor == 0) {
        //         break;
        //     }
        // }

        cout << n / divisor << endl;
    }   

    return 0;
}