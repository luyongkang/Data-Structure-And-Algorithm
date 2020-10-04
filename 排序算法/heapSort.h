#ifndef HEAPSORT_H
#define HEAPSORT_H

#include<vector>
/*
堆排序最好最坏平均时间复杂度均为O（nlogn）,空间复杂度为O（1），为不稳定排序
*/
void heapSort(std::vector<int>& nums);

void bigHeap(std::vector<int>& nums, int length,int root);


#endif 