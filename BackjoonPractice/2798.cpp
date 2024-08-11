#include<iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[10001];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int card;
	int maxSet = 0;
	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				card = arr[i] + arr[j] + arr[k];
				if (card <= m && maxSet < card)maxSet = card;
			}
		}
	}
	cout << maxSet;
}