#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,b,c;
	int a[100001], psum[100001]{0};
	cin >> n>>m;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		psum[i] = psum[i - 1] + a[i];
	}

	for (int i = 0;i < m;i++) {
		cin >> b >> c;
		cout << psum[c] - psum[b - 1] << '\n';
	}
}