#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{
	system("pause");
	return 0;
}
//
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
	i
	if (p == NULL&&q == NULL)
		return true;
	if (p == NULL || q == NULL)
		return false;

	return (p->val == q->val)&&isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
}
//
void inorder(Node* root){
	if (root == NULL)
		return;

	inorder(root->left);
	//TODO
	root->left;
	root->right;
	inorder(root->right);
}
//
struct Result 