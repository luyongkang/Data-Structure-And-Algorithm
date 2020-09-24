#include"quickSort.h"
#include<algorithm>
#include<time.h>
#include<stack>
using namespace std;

void quickSort(vector<int>& nums, size_t left,size_t right)
{
	if (nums.size()==0||left==right)
		return;
	//随机选取base值减少最坏情况发生
	srand((unsigned)time(NULL));
	int len = right - left + 1;
	auto baseIndex = rand() % len + left;
	swap(nums[left], nums[baseIndex]);

	int lth = left;
	int rth = right;
	bool moveLTH = false;//判断是移动左还是右
	while (lth < rth)
	{
		if (moveLTH)
		{
			
			if (nums[lth] > nums[rth])
			{
				swap(nums[lth], nums[rth]);
				moveLTH = false;
			}
			else
				lth++;
			
		}
		else
		{
			
			if (nums[lth] > nums[rth])
			{
				swap(nums[lth], nums[rth]);
				moveLTH = true;
			}
			else
				rth--;
			
		}
	}

	if (left + 1 < lth)
		quickSort(nums, left, lth - 1);
	if (rth + 1 < right)
		quickSort(nums, rth + 1, right);

	return;
}

void urQuickSort(vector<int>& nums)
{
	if (nums.size() <= 0)
		return;

	int left = 0;
	int right = nums.size() - 1;
	stack<int> s;
	s.push(left);
	s.push(right);

	while (!s.empty())
	{
		right = s.top();
		s.pop();
		left = s.top();
		s.pop();

		int i = left;
		int j = right;
		bool moveI = false;
		while (i < j)
		{
			if (moveI)
			{
				if (nums[i] > nums[j])
				{
					swap(nums[i], nums[j]);
					moveI = false;
				}
				else
					++i;
			}
			else
			{
				if (nums[j] < nums[i])
				{
					swap(nums[i], nums[j]);
					moveI = true;
				}
				else
					--j;
			}
		}
		
		if (i - 1 > left)
		{
			s.push(left);
			s.push(i - 1);
		}
		if (i + 1 < right)
		{
			s.push(i + 1);
			s.push(right);
		}
		
	}

	return;
}
