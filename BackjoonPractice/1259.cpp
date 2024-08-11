#include<iostream>
#include<string>
using namespace std;

int main() {
	while (true) {
		int temp,cnt=0;
		bool isPalindrome = true;
		cin >> temp;
		if (temp == 0) {
			break;
		}
		string str = to_string(temp);
		
		
		for (int i = 0; i < str.length() / 2; i++)
		{
			if (str[i] != str[str.length() - 1 - i])
			{
				isPalindrome = false;
			}
		}
		if (isPalindrome) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}