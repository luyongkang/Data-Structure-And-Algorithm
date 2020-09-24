#include"MyList.h"
#include<iostream>

using namespace std;

/*
����һ����ָ��fast��һ����ָ��slow�����߳�ʼ��ָ������ͷ��fastһ����������slowһ����һ����
����ָ��ͬʱ��ǰ�ƶ���ÿ�ƶ�һ�Σ�����ָ�붼Ҫ���бȽϣ������ָ�������ָ�룬
��֤�����Ǹ��л��ĵ������������fast���е�������β����ΪNULL����֤�����Ǹ��������ĵ�����
������л����ػ�����ڣ����û�з���nullptr
fast��slow�غϺ�fast������Ϊ��ͷ��fast��slow��һ����һ����������������
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

	//fast�Ѻ�slow�غ�
	fast = pHead;
	while (fast != slow) {
		fast = fast->pNext;
		slow = slow->pNext;
	}

	return fast;

}