#include<iostream>

using namespace std;

int main() {
	int n, m;
	int month[13]{ 0,31,29,31,30,31,30,31,31,30,31,30,31 };

	int mon, day;
	cin >> n >> m;
	mon = n;
	day = m;

	for (int i = 0;i < 99;i++) {
		day++;
		if (month[mon] <= day) {
			day = 0;
			mon++;
		}
	}
	cout << "100일 되는 날은" << mon << "월 " << day << "일";
}