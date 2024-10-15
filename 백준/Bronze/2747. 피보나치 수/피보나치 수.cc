#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> vArr;

	int n;
	cin >> n;
	for (int i = 0;i <= n;i++) {
		if(i<2)
			vArr.push_back(i);
		else {
			vArr.push_back(vArr[i - 2] + vArr[i - 1]);
		}
	}
	cout << vArr.back();
}