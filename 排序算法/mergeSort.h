#ifndef MERGESORT_H
#define MERGESORT_H	
#include<vector>

//归并排序---平均时间复杂度O(nlogn),最坏时间复杂度O(nlogn),最好时间复杂度O(nlogn),稳定
void mergeSort(std::vector<int>& array,size_t left,size_t right);


void urMergeSort(std::vector<int>& nums);
#endif