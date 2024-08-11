#include<iostream>
#include<stack>

using namespace std;

int main() {
	int count;
	stack<int> q;
	cin >> count;

	for (int i = 0;i <= count;i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int temp;
			cin >> temp;
			q.push(temp);
		}
		else if (str == "pop") {
			if (q.empty())
				cout << -1 << endl;
			else {
				cout << q.top() << endl;
				q.pop();
			}

		}
		else if (str == "size") {
			cout << q.size() << endl;
		}
		else if (str == "empty") {
			cout << (int)q.empty() << endl;
		}
		else if (str == "top") {
			if (q.empty())
				cout << -1 << endl;
			else
				cout << q.top() << endl;
		}
	}
}