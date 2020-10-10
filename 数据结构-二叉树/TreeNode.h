#ifndef TREENODE_H
#define TREENODE_H

class TreeNode
{
public:
	int data;
	TreeNode* right;
	TreeNode* left;

	TreeNode(int parm) :data(parm), right(nullptr), left(nullptr) {}
};
#endif 