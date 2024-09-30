#include <iostream>
#include <string>
#include <algorithm>

int main() {
    using namespace std;
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int counter = 0;
        string vowels = "aiueo";
        
        for (char c : s) {
            if (vowels.find(c) != string::npos) {
                counter = 0;
            } else {
                counter++;
                if (counter >= 4) {
                    break;
                }
            }
        }
        
        cout << (counter >= 4 ? "NO" : "YES") << endl;
    }
    
    return 0;
}