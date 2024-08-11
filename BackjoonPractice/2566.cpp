#include<iostream>

using namespace std;

int main() {
	int max = -1, maxX, maxY;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int temp;
			cin >> temp;
			if (temp > max) {
				max = temp;
				maxX = i;
				maxY = j;
			}
		}
	}
	cout << max << endl << maxX << " " << maxY;
}