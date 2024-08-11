#include<iostream>
using namespace std;

int main() {
	int arr[42] = {0};

	for (int i = 0;i < 10;i++) {
		int v;
		cin >> v;
		arr[v%42]++;
	}

	int result =0;

	for (int v : arr) {
		if (v > 0) {
			result++;
		}
	}

	cout << result;
}