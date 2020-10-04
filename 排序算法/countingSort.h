#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include<vector>
/*
计数排序是最大最小值相差不大情况下的最快排序算法
时间复杂度为平均最坏最好均为O（n+k），空间复杂度为O（k），k为最大最小值的差值,是一种稳定排序
*/
void countingSort(std::vector<int>& nums);

#endif 