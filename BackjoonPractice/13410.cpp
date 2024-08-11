#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int n,m,ans = 0;
	cin >> n >> m;
	for (int i = 1; i <=m; i++) {
		string s = to_string((i * n));
		reverse(s.begin(), s.end());
		int temp = stoi(s);
		ans = max(ans,temp);
	}


	cout << ans;
}