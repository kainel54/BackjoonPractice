#include<iostream>
#include<queue>

using namespace std;

int main() {
	int count;
	queue<int> q;
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
				cout << -1<<endl;
			else {
				cout << q.front()<<endl;
				q.pop();
			}
				
		}
		else if (str == "size") {
			cout << q.size()<<endl;
		}
		else if (str == "empty") {
			cout << (int)q.empty()<<endl;
		}
		else if (str == "front") {
			if (q.empty())
				cout << -1<<endl;
			else
				cout << q.front()<<endl;
		}
		else if (str == "back") {
			if (q.empty())
				cout << -1<<endl;
			else
				cout << q.back()<<endl;
		}
	}
}