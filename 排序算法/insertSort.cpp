#include"bubbleSort.h"
#include<algorithm>

using namespace std;

void insertSort(vector<int>& nums)
{
	if (nums.size() <= 1)
		return;

	int index = 0; //��Ҫ��������ֵ�λ��
	for (index = 1; index < nums.size(); ++index)
	{
		//�Ӻ���ǰ�ȽϽ���
		for (int j = index - 1; j >= 0; --j)
		{
			if (nums[j + 1] < nums[j])
				swap(nums[j + 1], nums[j]);
		}
	}

	return;
}