#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        std::vector<int> a(2 * n);
        
        for (int& num : a) {
            cin >> num;
        }
        
        unordered_map<int, int> b;
        bool isValid = true;
        
        for (int num : a) {
            b[num]++;
            
            if (b[num] > 2) {
                isValid = false;
                break;
            }
        }
        
        cout << (isValid ? "YES" : "NO") << endl;
    }
    
    return 0;
}
