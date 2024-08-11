#include<iostream>
using namespace std;

int main() {
	int num, idx;
	cin >> num >> idx;

	for (int i = 0;i < num;i++) {
		int temp;
		cin >> temp;
		if (temp < idx) {
			cout << temp<<" ";
		}
	}
}