#include"MyList.h"
#include<iostream>

using namespace std;

/*
设置一个快指针fast，一个慢指针slow，二者初始都指向链表头，fast一次走两步，slow一次走一步，
两个指针同时向前移动，每移动一次，两个指针都要进行比较，如果快指针等于慢指针，
则证明这是个有环的单链表，否则如果fast先行到达链表尾部或为NULL，则证明这是个不带环的单链表。
如果含有环返回环的入口，如果没有返回nullptr
fast与slow重合后将fast重新置为表头，fast与slow均一次走一步，相遇点就是入口
*/

MyList* EntryNodeOfLoop(MyList* pHead) {
	MyList* fast = pHead->pNext->pNext;
	MyList* slow = pHead->pNext;

	while (fast != slow) {
		if (fast->pNext == nullptr || fast->pNext->pNext == nullptr) {
			fast = nullptr;
			break;
		}
		fast = fast->pNext->pNext;
		slow = slow->pNext;
	}

	if (fast == nullptr) {
		return nullptr;
	}

	//fast已和slow重合
	fast = pHead;
	while (fast != slow) {
		fast = fast->pNext;
		slow = slow->pNext;
	}

	return fast;

}