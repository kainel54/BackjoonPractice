#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<int> arr;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		if (temp == 0) {
			arr.pop();
		}
		else {
			arr.push(temp);
		}
	}
	
	int stackSize = arr.size(),sum=0;
	for (int i = 0; i < stackSize; i++) {
		sum += arr.top();
		arr.pop();
	}

	cout << sum;
}