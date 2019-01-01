#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
TreeNode* Find(TreeNode* root, char x)
{
	if (root == NULL)
		return NULL;
	if (root->val == x)
		return root;
	TreeNode* result = Find(root->left, x);
	return result != NULL ? result : Find(root->right, x);
	//return Find(root->left, x) != NULL ? Find(root->left, x) : Find(root->right, x);
}
int main()
{
	system("pause");
	return 0;
}