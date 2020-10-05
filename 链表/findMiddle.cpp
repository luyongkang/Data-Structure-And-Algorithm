#include"findMiddle.h"

using namespace std;

double findMiddle(ListNode* head)
{
	double result = 0;
	ListNode* fastptr = head;
	ListNode* slowptr = head;
	while (true)
	{
		if (fastptr->pNext == nullptr)
		{
			result = slowptr->data;
			break;
		}
		else if (fastptr->pNext->pNext == nullptr)
		{
			result = slowptr->data + slowptr->pNext->data;
			result = result / 2.0;
			break;
		}
		else
		{
			fastptr = fastptr->pNext->pNext;
			slowptr = slowptr->pNext;
		}
	}

	return result;
}