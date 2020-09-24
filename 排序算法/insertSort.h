#ifndef INSERTSORT_H
#define INSERTSORT_H
#include<vector>

//插入排序---平均时间复杂度O(n^2),最坏时间复杂度O(n^2),最好时间复杂度O(n),稳定
/*
对于一个数组A[0,n]的排序问题，假设认为数组在A[0,n-1]排序的问题已经解决了。
考虑A[n]的值，从右向左扫描有序数组A[0,n-1]，直到第一个小于等于A[n]的元素，将A[n]插在这个元素的后面。
*/

void insertSort(std::vector<int>& array);

#endif