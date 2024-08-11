#include<iostream>
using namespace std;

int main() {
	int arr[10] = { 0 };
	int res = 1;

	for (int i = 0;i < 3;i++) {
		int v;
		cin >> v;
		res *= v;
	}

	while (res != 0) {
		arr[res % 10]++;	
		res /= 10;			
	}

	for (int v : arr) {
		cout << v<<endl;
	}

	return 0;
}