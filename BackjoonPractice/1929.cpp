#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> arr(m+1,0);
	for (int i = 2; i <= m; i++) {
		arr[i] = i;
	}

	for (int i = 2; i * i <= m; i++) {
		if (arr[i] == 0) {
			continue;
		}
		for (int j = 2 * i; j <= m; j += i) {
			if (arr[j] == 0) continue;
			else arr[j] = 0;
		}
	}

	for (int i = n; i <= m; i++) {
		if (arr[i] != 0) cout << arr[i] << "\n";
	}
}