#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, x, y;
	int count;

	cin >> n;
	vector<pair<int, int>> v;
	
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(pair<int, int>(x, y));
	}

	for (int i = 0; i < n; i++) {
		count = 1;
		for (int j = 0; j < n; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				count++;
			}
		}
		cout << count << " ";
	}

}