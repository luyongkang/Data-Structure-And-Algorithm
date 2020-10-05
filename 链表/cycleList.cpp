#include"cycleList.h"


//快慢指针第一次相遇就是有环
bool hasCycle(ListNode* head)
{
	ListNode* fastptr = head;
	ListNode* slowptr = head;
	while (fastptr != nullptr && fastptr->pNext != nullptr)
	{
		fastptr = fastptr->pNext->pNext;
		slowptr = slowptr->pNext;

		if (slowptr == fastptr)
		{
			return true;
		}
	}

	return false;
}

//快慢指针第一次相遇后继续走，第二次相遇时慢指针相比第一次相遇多走出的就是一个环。
int cycleSize(ListNode* head)
{
	ListNode* fastptr = head;
	ListNode* slowptr = head;
	while (fastptr!=nullptr&&fastptr->pNext!=nullptr)
	{
		fastptr = fastptr->pNext->pNext;
		slowptr = slowptr->pNext;
		if (fastptr == slowptr)
			break;
	}

	int size = 0;
	//fastptr一直保持相遇的点，slowptr走一圈
	while (true)
	{
		slowptr = slowptr->pNext;
		++size;
		if (slowptr == fastptr)
			break;
	}

	return size;
}

ListNode* cycleEntry(ListNode* head)
{
	//快慢指针相遇后将一个移至链表头，另一个从相遇点出发，他们再次相遇的点就是入口
	ListNode* fastptr = head;
	ListNode* slowptr = head;
	while (fastptr != nullptr && fastptr->pNext != nullptr)
	{
		fastptr = fastptr->pNext->pNext;
		slowptr = slowptr->pNext;
		if (fastptr == slowptr)
		{
			fastptr = head;
			while (fastptr != slowptr)
			{
				fastptr = fastptr->pNext;
				slowptr = slowptr->pNext;
			}

			return fastptr;
		}
	}

	return nullptr;
}