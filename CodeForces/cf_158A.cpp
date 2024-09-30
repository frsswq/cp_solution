#include <iostream>
#include <vector>

// hanya diitung kalau skor integer positif jadi nilai 0 tidak dihitung

int main() {
	using namespace std;
	
	int n, k; cin >> n >> k;
	
	vector<int> a(n);
	
	for (int& num : a) {
		cin >> num;
	}
	
	int threshold = (k > 0) ? a[k - 1] : 1;
	int counter = 0;
	
	for (int num : a) {
		if (num >= threshold && num > 0) {
			counter++;
		}
	}
	
	cout << counter;
	
	return 0;
}

// int main () {
	// using namespace std;
	// int n, k;
	// cin >> n >> k;
	
	// vector<int> a(n + 1);
	
	// for (int i = 1; i < n; i++) {
		// cin >> a[i];
		
		// if (a[i] == 0) {
			// cout << 0;
			// return 0;
		// }
	// }
	
	// int c = 0;
	// int t = a[k];
	
	// for (int num : a) {
		// if (num >= t) {
			// c++;
		// }
	// }
	
	// cout << c;
	
	// return 0;
// }
