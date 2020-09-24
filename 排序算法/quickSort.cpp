#include"quickSort.h"
#include<algorithm>
#include<time.h>
using namespace std;

void quickSort(vector<int>& nums, size_t left,size_t right)
{
	if (nums.size()==0||left==right)
		return;
	//���ѡȡbaseֵ������������
	srand((unsigned)time(NULL));
	int len = right - left + 1;
	auto baseIndex = rand() % len + left;
	swap(nums[left], nums[baseIndex]);

	int lth = left;
	int rth = right;
	bool moveLTH = false;//�ж����ƶ�������
	while (lth < rth)
	{
		if (moveLTH)
		{
			while (lth < rth)
			{
				if (nums[lth] > nums[rth])
				{
					swap(nums[lth], nums[rth]);
					moveLTH = false;
					break;
				}
				lth++;
			}
		}
		else
		{
			while (lth < rth)
			{
				if (nums[lth] > nums[rth])
				{
					swap(nums[lth], nums[rth]);
					moveLTH = true;
					break;
				}
				rth--;
			}
		}
	}

	if (left + 1 < lth)
		quickSort(nums, left, lth - 1);
	if (rth + 1 < right)
		quickSort(nums, rth + 1, right);

	return;
}