#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string name, state;
	map <string, string, greater<string>> log;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> name >> state;
		log[name] = state;
	}
	map<string, string>::iterator it;
	for (it = log.begin(); it != log.end(); ++it) {
		if (it->second == "enter") {
			cout << it->first << "\n";
		}
	}
	return 0;
}