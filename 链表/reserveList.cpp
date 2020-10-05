#include"reserveList.h"


ListNode* reserveList(ListNode* head)
{
	ListNode* pre = nullptr;
	ListNode* current = head;
	ListNode* temp = nullptr;
	while (current != nullptr)
	{
		temp = current->pNext;
		current->pNext = pre;
		pre = current;
		current = temp;
	}

	return pre;
}