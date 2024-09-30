#include <iostream>
// ada solusi yang lebih bagus

int main() {
	using namespace std;
	int t;
	cin >> t;
	
	long long diff_p1 = 0;
	long long diff_p2 = 0;
	long long sum_p1 = 0;
	long long sum_p2 = 0;
	
	while(t--) {
		long long p1, p2;
		cin >> p1 >> p2;
		
		sum_p1 += p1;
		sum_p2 += p2;
		
		long long diff = sum_p1 - sum_p2;
		
		if (diff > 0 && diff > diff_p1) {
			diff_p1 = diff;
		}
		
		if (diff < 0 && abs(diff) > diff_p2) {
			diff_p2 = abs(diff);
		}
	}
	
	cout << (diff_p1 > diff_p2 ? 1 : 2) << " " << (diff_p1 > diff_p2 ? diff_p1 : diff_p2) << endl;
	
	return 0;
}