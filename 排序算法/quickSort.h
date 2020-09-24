#ifndef QUICKSORT_H
#define QUICKSORT_H

#include<vector>
using namespace std;
//快速排序---平均时间复杂度O(nlogn),最坏时间复杂度O(n^2),最好时间复杂度O(nlogn),不稳定
/*
*/

void quickSort(std::vector<int>& array,size_t left, size_t right);

void urQuickSort(std::vector<int>& nums);
#endif 
