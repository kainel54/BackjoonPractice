#include<iostream>
using namespace std;

int cnt = 0;
void f(int n) {
	if (n / 500 != 0) {
		n -= 500;
		cnt++;
		f(n);
	}
	else if (n / 100 != 0) {
		n -= 100;
		cnt++;
		f(n);
	}
	else if (n / 50 != 0) {
		n -= 50;
		cnt++;
		f(n);
	}
	else if (n / 10 != 0) {
		n -= 10;
		cnt++;
		f(n);
	}
	else if (n / 5 != 0) {
		n -= 5;
		cnt++;
		f(n);
	}
	else if(n/1!=0){
		n -= 1;
		cnt++;
		f(n);
	}
	else if (n == 0) {
		cout << cnt;
	}
}


int main() {
	int n;
	cin >> n;

	f(1000 - n);
}