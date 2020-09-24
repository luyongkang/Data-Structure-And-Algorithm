#ifndef MYLIST_H
#define MYLIST_H

class MyList {
public:
	int data;
	MyList* pNext;

	MyList(int val) :data(val), pNext(nullptr) {};

};

#endif