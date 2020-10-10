#include"postOrder.h"
#include<stack>
using namespace std;

string postOrder(TreeNode* root)
{
	if (root == nullptr)
		return string("");
	else
		return postOrder(root->left) + postOrder(root->right) + to_string(root->data);
}

string urPostOrder(TreeNode* root)
{
	string result("");
	stack<TreeNode*> s;
	s.push(root);

	while (!s.empty())
	{
		root = s.top();
		s.pop();
		result = to_string(root->data) + result;
		if (root->left != nullptr)
			s.push(root->left);
		if (root->right != nullptr)
			s.push(root->right);
	}

	return result;
}