#include<iostream>
int main() {
	int n,cnt = 0,i = 1;
	std::cin >> n;
	while (true) {cnt++;if (n <= i)break;i += cnt*6;}
	std::cout << cnt;
}