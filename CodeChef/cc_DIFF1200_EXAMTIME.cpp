#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b, c;
        int A, B, C;
        
        cin >> a >> b >> c;
        cin >> A >> B >> C;
        
        int sum_drag = a + b + c;
        int sum_slot = A + B + C;
        
        cout << (
        sum_drag > sum_slot ? "DRAGON" :
        sum_slot > sum_drag ? "SLOTH" :
        a > A ? "DRAGON" :
        A > a ? "SLOTH" :
        b > B ? "DRAGON" :
        B > b ? "SLOTH" :
        "TIE") << endl;
    }
    
    return 0;
}
