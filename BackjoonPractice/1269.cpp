#include<iostream>
#include<map>

using namespace std;

int main() {
	int n,m,cnt=0;
	map<int, int> map;
	cin >> n>>m;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		map[temp]++;
	}

	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		map[temp]++;
	}

	for (auto i : map) {
		if (i.second == 1) {
			cnt++;
		}
	}
	cout << cnt;
}