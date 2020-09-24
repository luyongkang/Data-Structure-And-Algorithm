#include"selectSort.h"
#include<algorithm>

using namespace std;

void selectSort(vector<int>& nums)
{
	if (nums.size() <= 1)
		return;

	for (int i = 0; i < nums.size()-1; ++i)//i已经排序的个数
	{
		int smallIndex = i;
		for (int j = i; j < nums.size(); ++j)//剩余未排序中的最小值
		{
			if (nums[j] < nums[smallIndex])
				smallIndex = j;
		}
		swap(nums[i], nums[smallIndex]);
	}

	return;
}