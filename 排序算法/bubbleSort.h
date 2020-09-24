#ifndef BUBBLESORT
#define BUBBLESORT

#include<vector>


//冒泡算法---平均时间复杂度O(n^2),最坏时间复杂度O(n^2),最好时间复杂度O(1),稳定
/*
步骤1: 比较相邻的元素。如果第一个比第二个大，就交换它们两个；
步骤2: 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对，这样在最后的元素应该会是最大的数；
步骤3: 针对所有的元素重复以上的步骤，除了最后一个；
步骤4: 重复步骤1~3，直到排序完成。
*/
void bubbleSort(std::vector<int>& array);


#endif