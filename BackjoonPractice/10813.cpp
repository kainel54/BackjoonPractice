#include<iostream>

using namespace std;

int main() {
	int n, m, arr[100];

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		arr[i] = i;

	while (m--) {
		int first, second;
		cin >> first >> second;

		for (int i = 0; i <= (first - second) / 2; i++) {
			swap(arr[first + i], arr[second - i]);
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}

}