#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int input[10001] = { 0 };
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		input[temp] += 1;
	}

	for (int i = 1; i < 10001;i++) {
		for (int j = 0; j < input[i]; j++) {
			cout << i<<"\n";
		}
	}
}