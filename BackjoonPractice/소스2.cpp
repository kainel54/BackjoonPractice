#include <iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
int drink[5][5],owner[5],ans;

void F(int n) {
	if (n == 5) {
		int cnt = 0;
		for (int i = 1;i < 5;i++) {
			cnt += owner[i];
		}
		if (ans < cnt) {
			ans = cnt;
		}
	}

	for (int i = 1;i < 5;i++) {
		if (owner[i] == 0) {
			
		}
	}
}


int main() {
	for (int i = 1;i < 5;i++) {
		for (int j = 1;j < 5;j++) {
			cin>>drink[i][j];
		}
	}
	F(1);
	return 0;
}