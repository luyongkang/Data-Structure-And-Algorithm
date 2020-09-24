#include"bubbleSort.h"
#include<algorithm>

using namespace std;

void insertSort(vector<int>& nums)
{
	if (nums.size() <= 1)
		return;

	int index = 0; //将要插入的数字的位置
	for (index = 1; index < nums.size(); ++index)
	{
		//从后向前比较交换
		for (int j = index - 1; j >= 0; --j)
		{
			if (nums[j + 1] < nums[j])
				swap(nums[j + 1], nums[j]);
		}
	}

	return;
}