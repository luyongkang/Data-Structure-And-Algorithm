#include"shellSort.h"
#include<algorithm>
using namespace std;

void shellSort(vector<int>& nums)
{
	if (nums.size() <= 1)
		return;

	int group = 0;
	for (group = nums.size() / 2; group > 0; group = group / 2)
	{
		//0��group-1��Ϊgroup���ÿһ����ͷ����
		for (int j = group; j < nums.size(); ++j)
		{
			int k = j - group;
			while (k >= 0)
			{
				if (nums[k] > nums[k + group])
					swap(nums[k], nums[k + group]);
				k -= group;
			}
		}
	}

	return;
}