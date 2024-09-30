#include <iostream>
#include <vector>

// still can't really grasp the problem fast enough intuitively

int main () {
	using namespace std;
	int n;
	cin >> n;
	
	vector<int> a(n + 1);
	vector<int> b(n + 1);
	
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a[i] = x;
		b[i] = x;
	}
	
	for (int i = 1; i <= n; i++) {
		b[a[i]] = i;
	}
	
	for (int i = 1; i <= n; i++) {
		cout << b[i] << " ";
	}
	
	return 0;
}