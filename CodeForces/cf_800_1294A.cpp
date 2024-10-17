    #include <iostream>
    #include <algorithm>

    int main () {
        using namespace std;
        int t;
        cin >> t;

        while(t--) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;

            long long largest =  max({a, b, c});
            long long diff = (largest - a) + (largest - b) + (largest - c);

            d -= diff;

            cout << (d % 3 == 0 && d >= 0 ? "YES" : "NO") << endl;
        }

        return 0;
    }

    // int main () {
    //     using namespace std;

    //     int t;
    //     cin >> t;
        
    //     while(t--) {
    //         vector<long long> a(3);
    //         long long n;

    //         for (long long& num : a) {
    //             cin >> num;
    //         }

    //         cin >> n;

    //         sort(a.begin(), a.end(), greater<int>());

    //         long long largest = a[0];
    //         long long diff = (largest - a[1]) + (largest - a[2]);

    //         n -= diff;

    //         cout << (n % 3 == 0 ? "YES" : "NO") << endl;
    //     }

    //     return 0;
    // }