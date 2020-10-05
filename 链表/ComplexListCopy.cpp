#include"ComplexListCopy.h"

ComplexListNode* copy(ComplexListNode* head)
{
	if (head == nullptr)
		return nullptr;
	//在每一个原节点后增加一个复制的节点
	ComplexListNode* temp;
	ComplexListNode* current = head;
	while (current != nullptr)
	{
		temp = new ComplexListNode(current->data);
		temp->pNext = current->pNext;
		current->pNext = temp;
		current = temp->pNext;
	}

	//补上random的值
	current = head;
	temp = head->pNext;
	while (true)
	{
		temp->random = current->random->pNext;
		if (temp->pNext == nullptr)
			break;
		current = temp->pNext;
		temp = temp->pNext->pNext;
	}

	//分离副本和原本
	ComplexListNode* newList = head->pNext;
	current = head;
	while (current->pNext!=nullptr)
	{
		temp = current->pNext;
		current->pNext = temp->pNext;
		current = temp;
	}

	return newList;

}