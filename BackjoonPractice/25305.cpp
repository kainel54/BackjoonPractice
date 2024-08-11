#include<iostream>
using namespace std;

int main() {
	int a[1000],n,k, num, i, j, result = 0;

	cin >> n >> k;

	for (i = 0; i < n; i++) {
		cin >> a[i];
		result += a[i];
	}

	for (i = 1; i < n; i++) {
		num = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (a[j] < num)
				a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = num;
	}
	cout << a[k - 1];
	return 0;
}