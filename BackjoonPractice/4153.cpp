#include<iostream>
#include<cmath>

using namespace std;

int main() {
	while (true) {
		int a, b, c,temp,max = 0;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		

		if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}
		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}

		
		if (pow(a,2)+pow(b,2) == pow(c,2)) {
			cout << "right"<<endl;
		}
		else {
			cout << "wrong" << endl;
		}
	}
}