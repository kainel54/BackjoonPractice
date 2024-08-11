#include<iostream>
using namespace std;

int main() {
	int t = 0, temp = 0;
	cin >> t;

	for (int i = 0;i < t;i++) {
		int h, w, n;
		cin >> h >> w >> n;

		if (n % h == 0) {
			temp = h * 100+n/h;
		}
		else {
			temp = n % h * 100+n/h+1;
		}

		

		cout << temp<<endl;
	}
}