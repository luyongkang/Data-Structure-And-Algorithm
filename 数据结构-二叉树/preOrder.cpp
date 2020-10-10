#include"preOrder.h"
#include<stack>
using namespace std;

string preOrder(TreeNode* root)
{
	if (root == nullptr)
		return string("");
	else
		return to_string(root->data) + preOrder(root->left) + preOrder(root->right);
}

string urPreOrder(TreeNode* root)
{
	stack<TreeNode*> s;
	s.push(root);
	string result("");
	while (!s.empty())
	{
		root = s.top();
		s.pop();
		result += to_string(root->data);
		if (root->right != nullptr)
			s.push(root->right);
		if (root->left != nullptr)
			s.push(root->left);
		
	}

	return result;
}