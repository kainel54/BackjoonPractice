#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	unsigned int s = 0;
	int n,m;
	string a = "";
	cin >> n;
	while (n--) {
		cin >> a;
		if (a == "add") {
			cin >> m;
			s |= (1 << m);
		}
		else if (a == "remove") {
			cin >> m;
			s &= ~(1 << m);
		}
		else if (a == "check") {
			cin >> m;
			if (s & (1 << m)) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (a == "toggle") {
			cin >> m;
			s ^= (1 << m);
		}
		else if (a == "all") {
			s = (1 << 21) - 1;
		}
		else if (a == "empty") {
			s = 0;
		}
	}
}