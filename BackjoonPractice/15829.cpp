#include<iostream>
#include<cmath>
using namespace std;

string str;
char a;
long long M = 1234567891;
int main() {
	int l;
	long long hash = 0;
	cin >> l >> str;

	long long r = 1;
	for (int i = 0; i < l; i++) {
		a = str[i];
		hash = (hash + (a - 96) * r) % M;
		r = (r * 31) % M;
	}

	cout << hash;

	return 0;
}