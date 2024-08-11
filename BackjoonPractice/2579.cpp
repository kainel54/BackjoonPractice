#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int step[301], arr[10001];

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        step[i] = a;
    }

    arr[1] = step[1];
    arr[2] = step[1] + step[2];
    arr[3] = step[3] + max(step[1], step[2]);


    for (int i = 4; i <= n; i++)
    {
        arr[i] = step[i] + max(step[i - 1] + arr[i - 3], arr[i - 2]);
    }

	cout << arr[n];
	return 0;
}