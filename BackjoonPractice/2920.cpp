#include<iostream>
using namespace std;

int main() {
	int sound[8];
	int dsc = 0,asc = 0;
	for (int i = 0;i < 8;i++) {
		cin>>sound[i];
		if (sound[i] == i + 1) {
			asc++;
		}
		else if(sound[i] == 8-i ) {
			dsc++;
		}
	}

	if (asc == 8) {
		cout << "ascending";
	}
	else if (dsc == 8) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
}