#include<iostream>
using namespace std;

struct node {
	node* left;
	node* right;
	int data;
};

node* MakeNode(int n) {
	node* nd = new node;
	nd->data = n;
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

node* root = NULL;

void Insert(node*& root, node* newNode) {
	if (root == NULL) {
		root = newNode;
	}
	else if (root->data < newNode->data) {
		if (root->right == NULL) {
			root->right = newNode;
		}
		else {
			Insert(root->right, newNode);
		}
	}
	else if (root->data > newNode->data) {
		if (root->left == NULL) {
			root->left = newNode;
		}
		else {
			Insert(root->left, newNode);
		}
	}
}

void postorder(node* nd) {
	if (nd == NULL) return;
	postorder(nd->left);
	postorder(nd->right);
	cout << nd->data << endl;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int value;
	while (cin >> value) {
		Insert(root, MakeNode(value));
	}

	postorder(root);
}
