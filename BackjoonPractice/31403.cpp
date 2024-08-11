#include<iostream>
#include<string>

using namespace std;

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	int temp = stoi(a) +stoi(b) - stoi(c);
	int sTemp = stoi(a+b)-stoi(c);

	cout << temp << endl << sTemp;
}