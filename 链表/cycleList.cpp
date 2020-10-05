#include"cycleList.h"


//����ָ���һ�����������л�
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

//����ָ���һ������������ߣ��ڶ�������ʱ��ָ����ȵ�һ���������߳��ľ���һ������
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
	//fastptrһֱ���������ĵ㣬slowptr��һȦ
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
	//����ָ��������һ����������ͷ����һ��������������������ٴ������ĵ�������
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