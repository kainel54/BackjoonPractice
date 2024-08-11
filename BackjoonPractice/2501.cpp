#include<iostream>
#include<map>
using namespace std;

int main() {
	map<int, int> arr;

	int p, q,count = 0;
	cin >> p >> q;

	for (int i = 1;i <= p;i++) {
		if (p % i == 0) {
			arr[i] = 1;
		}
	}

	for (auto i :arr) {
		if (i.second == 1) {
			count++;
			if (count == q) {
				cout << i.first;
				return 0;
			}
		}
		
	}
	if (count < q) {
		cout << 0;
	}
}