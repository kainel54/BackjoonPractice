#nclude<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	int num;
	map<int, int> map;
	cin >> num;
	for (int i = 1;i <= num;i++) {
		int temp;
		cin >> temp;
		if (map[temp] > i||map[temp]==0)
			map[temp] = i;
	}
	for (auto s:map) {
		cout << s.first << " " << s.second<<endl;
	}
}