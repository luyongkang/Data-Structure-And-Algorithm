#include"ComplexListCopy.h"

ComplexListNode* copy(ComplexListNode* head)
{
	if (head == nullptr)
		return nullptr;
	//��ÿһ��ԭ�ڵ������һ�����ƵĽڵ�
	ComplexListNode* temp;
	ComplexListNode* current = head;
	while (current != nullptr)
	{
		temp = new ComplexListNode(current->data);
		temp->pNext = current->pNext;
		current->pNext = temp;
		current = temp->pNext;
	}

	//����random��ֵ
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

	//���븱����ԭ��
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