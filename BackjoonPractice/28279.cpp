#include<iostream>
#include<deque>

using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	deque<int> deq;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "1") {
			int temp;
			cin >> temp;
			deq.push_front(temp);
		}
		else if (str == "2") {
			int temp;
			cin >> temp;
			deq.push_back(temp);
		}
		else if (str == "3") {
			if (deq.empty()) {
				cout << -1<<'\n';
			}
			else {
				cout << deq.front() << '\n';
				deq.pop_front();
			}
		}
		else if (str == "4") {
			if (deq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << deq.back() << '\n';
				deq.pop_back();
			}
		}
		else if (str == "5") {
			cout << deq.size() << '\n';
		}
		else if (str == "6") {
			cout << deq.empty() << '\n';
		}
		else if (str == "7") {
			if (deq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << deq.front() << '\n';
			}
		}
		else if (str == "8") {
			if (deq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << deq.back() << '\n';
			}
		}
	}
}