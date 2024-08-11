#include<iostream>
using namespace std;

int main() {
	int n,m,previus,fibonacci;
	cin >> n;
	while (n--)
	{
		cin >> m;
		for (fibonacci = 1, previus = 0;m--;previus += fibonacci, fibonacci = previus - fibonacci);
		cout << fibonacci << " " << previus<<endl;
	}
}