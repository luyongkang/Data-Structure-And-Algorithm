#ifndef MERGESORT_H
#define MERGESORT_H	
#include<vector>

//�鲢����---ƽ��ʱ�临�Ӷ�O(nlogn),�ʱ�临�Ӷ�O(nlogn),���ʱ�临�Ӷ�O(nlogn),�ȶ�
void mergeSort(std::vector<int>& array,size_t left,size_t right);


void urMergeSort(std::vector<int>& nums);
#endif