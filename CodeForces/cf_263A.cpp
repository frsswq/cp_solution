#include <iostream>
#include <vector>
#include <cmath>

// more optimized
int main () {
	using namespace std;
	vector<vector<int>> a(6, vector<int> (6));
	int row = 0, column = 0;
	
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> a[i][j];
			
			if (a[i][j] == 1) {
				row = i;
				column = j;
			}
		}
	}
	
	int diff = abs(row - 3) + abs(column - 3);
	
	cout << diff << endl;
	
	return 0;
}

// int main () {
	// using namespace std;	
	// vector<vector<int>> a(6, vector<int> (6));
	// vector<int> index {-1, -1};
	// int counter = 0;
	// int rows = 0;
	// int column = 0;
	
	// for (int i = 1; i <= 5; i++) {
		// for (int j = 1; j <= 5; j++) {
			// cin >> a[i][j];
			
			// if (a[i][j] == 1) {
				// index = {i, j};
				// rows = i;
				// column = j;
			// }
		// }
	// }
	
	// while (column != 3) {
		// if (column > 3) {
			// counter++;
			// column--;
		// } else if (column < 3) {
			// counter++;
			// column++;
		// }
	// }
	
	// while (rows != 3) {
		// if (rows > 3) {
			// counter++;
			// rows--;
		// } else if (rows < 3) {
			// counter++;
			// rows++;
		// }
	// }
	
	// cout << counter << endl;
	
	// return 0;
// }