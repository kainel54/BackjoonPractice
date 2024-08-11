#include<iostream>
using namespace std;

int main() {
	int a[100], num, i, j,result = 0;
	for (i = 0; i < 5; i++) {
		cin >> a[i];
		result += a[i];
	}
	
	for (i = 1; i < 5; i++) {
		num = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (a[j] > num)
				a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = num; 
	}
	cout << result / 5 << endl;
	cout << a[2];
	return 0;
}