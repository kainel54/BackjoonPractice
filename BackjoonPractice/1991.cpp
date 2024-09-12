#include<iostream>
#include<map>
using namespace std;
map<char, pair<char, char>> node;

void preorder(char ch) {
	if (ch == '.')return;
	cout << ch;
	preorder(node[ch].first);
	preorder(node[ch].second);
}

void inorder(char ch) {
	if (ch == '.')return;
	inorder(node[ch].first);
	cout << ch;
	inorder(node[ch].second);
}
void postorder(char ch) {
	if (ch == '.')return;
	postorder(node[ch].first);
	postorder(node[ch].second);
	cout << ch;
}

int main() {
	int n;
	cin >> n;

	char key, left, right;
	for (int i = 0;i < n;i++) {
		cin >> key>>left>>right;
		node[key] = { left,right };
	}

	preorder('A');
	cout << endl;
	inorder('A');
	cout << endl;
	postorder('A');
}