    #include <bits/stdc++.h>

    using ll = long long;
    using ull = unsigned long long;
    using ld = long double;

    int main () {
        using namespace std;
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;

        while(t--) {
            int n;
            cin >> n;

            ll left_num = n / 1000, right_num = n % 1000;
            ll left_sum = 0, right_sum = 0;

            for (int i = 0; i < 3; i++) {
                left_sum += left_num % 10;
                right_sum += right_num % 10;

                left_num /= 10;
                right_num /= 10;
            }           

            cout << (left_sum == right_sum ? "YES" : "NO") << endl;
        }   

        return 0;
    }