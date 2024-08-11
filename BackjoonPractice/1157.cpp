#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int arr[26] = {};
	cin >> str;
	int max = 0,index = -1;

	for (int i = 0;i < str.length();i++) {
		str[i] = toupper(str[i])-65;
		arr[str[i]]++;
	}

	for (int i = 0;i < 26;i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (i == index)
			continue;
		if (arr[i] == max)
		{
			cout << '?';
			return 0;
		}
	}

	cout << (char)(index + 65);
	return 0;
}