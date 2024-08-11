#include<iostream>
using namespace std;

int main() {
	int num,min = 1000000,max = -1000000;
	cin >> num;
	for (int i = 0;i < num;i++) {
		int idx;
		cin >> idx;
		if (idx < min) {
			min = idx;
		}
		if (idx > max) {
			max = idx;
		}
	}
	cout << min << " " << max;
}