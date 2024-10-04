#include <iostream>

int main() {
	using namespace std;
	int w;
	cin >> w;
	
	cout << (w % 2 == 0 && w > 2 ? "YES" : "NO") << endl;
	
	return 0;
}