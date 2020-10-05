#include"MyList.h"
#include"reserveList.h"
#include"findMiddle.h"
#include<iostream>

using namespace std;


int main()
{
	ListNode* head = new ListNode(0);
	ListNode* pre = head;
	ListNode* temp = head;
	for (int i = 1; i < 10; ++i)
	{
		temp = new ListNode(i);
		pre->pNext = temp;
		pre = temp;
	}

	
	while (temp != nullptr)
	{
		cout << temp->data << "  ";
		temp = temp->pNext;
	}


	return 0;
}