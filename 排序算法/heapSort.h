#ifndef HEAPSORT_H
#define HEAPSORT_H

#include<vector>
/*
����������ƽ��ʱ�临�ӶȾ�ΪO��nlogn��,�ռ临�Ӷ�ΪO��1����Ϊ���ȶ�����
*/
void heapSort(std::vector<int>& nums);

void bigHeap(std::vector<int>& nums, int length,int root);


#endif 