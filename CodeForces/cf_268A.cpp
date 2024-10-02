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

        // not really efficient i guess

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            a[i] = x;
            b[i] = y;
        }

        int conflict_appearance = 0;

        for (int n1 : a) {
            for (int n2 : b) {
                if (n1 == n2) conflict_appearance++;
            }
        }

        cout << conflict_appearance << endl;

        return 0;
    }