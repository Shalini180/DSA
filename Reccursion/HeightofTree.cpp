#include <bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* left;
	node* right;
};
int height(node* node)
{
    if(node==NULL)
    return 0;
    int left=height(node->left);
    int right=height(node->right);
    return 1+max(left,right);
}	
node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}
int main()
{
	node* root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left=newNode(7);

	cout << "Height of tree is " << height(root);
	return 0;
}
