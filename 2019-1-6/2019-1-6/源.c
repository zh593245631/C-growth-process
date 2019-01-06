//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<Windows.h>
//
//int main()
//{
//	system("pause");
//	return 0;
//}
//¶þ²æÊ÷²éÕÒ
struct TreeNode* who(struct TreeNode* a, struct TreeNode* b)
{
	return a != NULL ? a : b;
}
struct TreeNode *Find(struct TreeNode * root, int val)
{
	if (root == NULL)
		return NULL;
	
	if (root->val == val)
		return root;

	return who(Find(root->left, val), Find(root->right, val));
}