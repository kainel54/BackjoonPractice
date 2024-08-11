#include<iostream>

using namespace std;

int main() {
	int a[1001], n, tmp, selected, i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n - 1; i++) {
		selected = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[selected])
				selected = j;
		}
		tmp = a[i];
		a[i] = a[selected];
		a[selected] = tmp;
	}
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}