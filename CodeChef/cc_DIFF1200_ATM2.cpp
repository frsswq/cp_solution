#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            
            if (k >= x) {
                k -= x;
                cout << 1;
            } else {
                cout << 0;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
