#include "mergeSort.h"
#include<algorithm>
using namespace std;
void mergeSort(vector<int>& array,size_t left,size_t right)
{
	if (array.empty() || right == left)
		return;
	if (right-left==1)
	{
		if (array[left] > array[right])
			swap(array[left], array[right]);
		return;
	}
	//0，1，2的小数组单独处理，也可以处理更大的数组，这样可以减少迭代次数。
	size_t mid = left + (right - left) / 2;

	mergeSort(array, left, mid);
	mergeSort(array, mid + 1, right);

	vector<int> merge;
	size_t i = left;
	size_t j = mid + 1;
	while (i <= mid && j <= right)
	{
		if (array[i] < array[j])
		{
			merge.push_back(array[i]);
			++i;
		}
		else
		{
			merge.push_back(array[j]);
			++j;
		}
	}
	for (; i <= mid; ++i)
		merge.push_back(array[i]);

	for (; j <= right; ++j)
		merge.push_back(array[j]);
	
	copy(merge.begin(), merge.end(), array.begin() + left);

	return;
}

void urMergeSort(vector<int>& nums)
{

}


