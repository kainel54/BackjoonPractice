#include<iostream>
#include<string>
using namespace std;

int main() {
	int alpha[26];
	for (int i = 0;i < 26;i++) {
		alpha[i] = -1;
	}
	string str;
	cin >> str;

	for (int i = 0;i < str.length();i++) {
		str[i] = toupper(str[i]) - 65;
		if (alpha[str[i]] != -1) {
			continue;
		}
		alpha[str[i]] = i;
	}

	for (int v : alpha) {
		cout << v<<" ";
	}
}