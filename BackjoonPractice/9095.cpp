#include<iostream>
using namespace std;

int main() {
	int t,n,dp[1001];
	
	cin >> t;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int j = 4; j < 11; j++)dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << dp[n]<<endl;
	}
}