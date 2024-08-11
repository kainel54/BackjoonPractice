#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> subs;

	for (int i = 1;i <= 30;i++) {
		subs[i] = 0;
	}

	for (int i = 0;i < 28;i++) {
		int temp;
		cin >> temp;
		subs[temp]++;
		
	}

	for (auto &n:subs) {
		if (n.second == 0) {
			cout << n.first<<endl;
		}
	}
}