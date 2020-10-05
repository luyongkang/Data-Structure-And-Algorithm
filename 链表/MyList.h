#ifndef MYLIST_H
#define MYLIST_H

class ListNode 
{
public:
	int data;
	ListNode* pNext;

	ListNode(int val) :data(val), pNext(nullptr) {};

};

class ComplexListNode
{
public:
	int data;
	ComplexListNode* pNext;
	ComplexListNode* random;
	ComplexListNode(int val) :data(val), pNext(nullptr), random(nullptr) {};
};

#endif