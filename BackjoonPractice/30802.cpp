#include<iostream>
using namespace std;

int main() {
	int n,s[6], t, p,cnt = 0;
	cin >> n;
	for (int i = 0;i < 6;i++) {
		cin >> s[i];
	}
	cin >> t >> p;
	for (int i = 0; i < 6; i++)
		cnt += (s[i] / t + (s[i] % t > 0));

	cout << cnt << '\n' << n / p << " " << n % p << '\n';
}