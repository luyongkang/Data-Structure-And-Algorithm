#include"selectSort.h"
#include<algorithm>

using namespace std;

void selectSort(vector<int>& nums)
{
	if (nums.size() <= 1)
		return;

	for (int i = 0; i < nums.size()-1; ++i)//i�Ѿ�����ĸ���
	{
		int smallIndex = i;
		for (int j = i; j < nums.size(); ++j)//ʣ��δ�����е���Сֵ
		{
			if (nums[j] < nums[smallIndex])
				smallIndex = j;
		}
		swap(nums[i], nums[smallIndex]);
	}

	return;
}