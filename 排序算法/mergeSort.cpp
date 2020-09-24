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
	//0��1��2��С���鵥������Ҳ���Դ����������飬�������Լ��ٵ���������
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
	if (nums.size() <= 1)
		return;
	int len = nums.size();
	for (int i = 1; i < len; i = i*2)
	{
		int left = 0;
		int right = i*2-1;
		int mid = left+i;
		//left�������Ŀ�ʼλ�ã�right�ұ�����Ľ���λ�ã�mid�ұ�����Ŀ�ʼλ�ã�mid-1�������Ľ���λ�ü��ϲ�[left,mid-1]��[mid,right]

		
		while (left < len)
		{
			vector<int> merge;
			if (mid < len && right >= len)
			{
				right = len - 1;
			}
			if (mid >= len)
			{
				break;
			}
			int k = left, j = mid;
			//�ϲ�
			while (k <= mid - 1 && j <= right)
			{
				if (nums[k] < nums[j])
				{
					merge.push_back(nums[k]);
					k++;
				}
				else
				{
					merge.push_back(nums[j]);
					++j;
				}
			}
			while (k <= mid - 1)
			{
				merge.push_back(nums[k]);
				++k;
			}
			while (j <= right)
			{
				merge.push_back(nums[j]);
				++j;
			}

			copy(merge.begin(), merge.end(), nums.begin() + left);

			left = left + i*2;
			right = right + i*2;
			mid = mid + i*2;
		}
	}

	return;
}


