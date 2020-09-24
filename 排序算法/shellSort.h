#ifndef SHELLSORT_H
#define SHELLSORT_H

#include<vector>

/*希尔排序，时间复杂度根据增量序列决定在O(n1.3)-O(n2)之间，比如以1，2，4，8...为增量序列则时间复杂度为O（n2）*/
void shellSort(std::vector<int>& nums);

#endif
