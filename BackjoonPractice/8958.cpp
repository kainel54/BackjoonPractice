#include<iostream>
#include<string>
using namespace std;

int main() {
	int tr;
	cin >> tr;

	for (int i = 0;i < tr;i++) {
		string str;
		int add = 0, result = 0;
		cin >> str;
		for (int i = 0;i < str.length();i++) {
			if (str[i] == 'O') {
				add += 1;
				result += add;
			}
			else if (str[i] == 'X') {
				add = 0;
			}
		}
		cout << result << endl;
	}
}
