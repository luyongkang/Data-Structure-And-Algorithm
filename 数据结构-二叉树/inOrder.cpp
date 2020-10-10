#include"inOrder.h"
#include<stack>
using namespace std;
string inOrder(TreeNode* root)
{
	if (root == nullptr)
		return string("");
	else
		return inOrder(root->left) + to_string(root->data) + inOrder(root->right);
}

string urInOrder(TreeNode* root)
{
	stack<TreeNode*> s;
	string result("");
	while (root != nullptr)
	{
		s.push(root);
		root = root->left;
	}

	while (!s.empty())
	{
		root = s.top();
		s.pop();
		result = result + to_string(root->data);

		root = root->right;
		while (root != nullptr)
		{
			s.push(root);
			root = root->left;
		}
	}

	return result;
}