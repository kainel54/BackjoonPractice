#include<iostream>
#include<map>
using namespace std;

int main() {
	map<int, bool> marr;
	int n,m,cnt=0;
	cin >> n>>m;

	marr[1] = true;

	for (int i = 0;i < m;i++) {
		int temp1,temp2;
		cin >> temp1 >> temp2;
		if (marr[temp1]==true) {
			marr[temp2] = true;
		}
	}

	for (auto i : marr) {
		if (i.second) {
			cnt++;
		}
	}

	cout << cnt-1;
}
