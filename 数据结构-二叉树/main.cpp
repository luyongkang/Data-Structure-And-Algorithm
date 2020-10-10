#include<iostream>
#include"TreeNode.h"
#include"preOrder.h"
#include"postOrder.h"
#include"inOrder.h"
using namespace std;

int main()
{
	TreeNode* root;
	TreeNode* left = new TreeNode(8);
	TreeNode* right = new TreeNode(9);
	TreeNode* parent = new TreeNode(7);
	parent->left = left;
	parent->right = right;
	right = parent;
	parent = new TreeNode(3);
	parent->right = right;
	left = parent;
	right = new TreeNode(4);
	parent = new TreeNode(1);
	parent->left = left;
	parent->right = right;
	left = parent;
	parent = new TreeNode(0);
	root = parent;
	parent->left = left;
	right = new TreeNode(2);
	parent->right = right;
	parent = right;
	left = new TreeNode(5);
	right = new TreeNode(6);
	parent->left = left;
	parent->right = right;
	/*树的结构如图
													0
											1				2
										3		4		5		6
										  7
										8  9

	*/
	cout << inOrder(root) << endl;
	cout << urInOrder(root) << endl;
}