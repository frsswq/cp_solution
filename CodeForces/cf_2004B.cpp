#include <iostream>
#include <algorithm>
#include <cmath>

int main () {
	using namespace std;
	int t;
	cin >> t;
	
	while(t--) {
		int l, r, L, R;
		cin >> l >> r >> L >> R;
		
		int max_left = max(l, L);
		int min_right = min(r, R);
		
		if (max_left > min_right) {
			cout << 1 << endl;
			continue;
		}
		
		int distance = min_right - max_left;
		int counter = 0;
		
		if (max_left > l || max_left > L) {
			counter++;
		} 
		
		if (min_right < r || min_right < R) {
			counter++;
		}
		
		cout << min_right - max_left + counter << endl;
	}
	
	return 0;
}

// int main () {
	// using namespace std;
	// int t;
	// cin >> t;
	
	// while(t--) {
		// int min_a, max_a, min_b, max_b;
		// cin >> min_a >> max_a >> min_b >> max_b;
		
		// int counter = 0;
		
		// int diff_a = abs(max_a - min_a);
		// int diff_b = abs(max_b - min_b);
		
		// if (min_a > max_b) {
			// cout << min_a - max_b << endl;
			// continue;
		// } else if (min_b > max_a) {
			// cout << min_b - max_a << endl;
			// continue;
		// }
		
		// if (diff_a == diff_b) {
			// cout << diff_a << endl;
			// continue;
		// }
		
		// if (diff_a < diff_b) {
			// counter = diff_a;
			// if (min_a > min_b) counter += 1;
			// if (max_a < max_b) counter += 1;
		// } else {
			// counter = diff_b;
			// if (min_b > min_a) counter += 1;
			// if (max_b < max_a) counter += 1;
		// }
						
		// cout << counter << endl;
	// }
	
	// return 0;
// }