#include<iostream>
#include<regex>

using namespace std;

int main() {
	regex re("(100+1+|01)+");
	string input;
	int t;
	cin >> t;

	for (int i = 0;i < t;++i) {
		cin >> input;
		cout << (regex_match(input, re) ? "YES" : "NO") << "\n";
	}
}
