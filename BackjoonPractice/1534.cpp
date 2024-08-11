#include<iostream>
using namespace std;

int main() {
	int n,max = -1;
	float arr[1000];
	float sum = 0;
	cin >> n;

	for (int i = 0;i < n;i++) {
		int temp;
		cin >> temp;
		if (temp > max) {
			max = temp;
		}
		arr[i] = temp;
	}

	for (int i = 0;i < n;i++) {
		arr[i]=(arr[i] / max) * 100;
		sum += arr[i];
	}

	cout << sum / n;
}