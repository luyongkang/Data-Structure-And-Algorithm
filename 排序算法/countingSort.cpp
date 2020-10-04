#include"countingSort.h"
#include<algorithm>
using namespace std;

void countingSort(vector<int>& nums)
{
	int smallest = nums[0];
	int biggest = nums[0];
	//寻找数组的最大和最小值;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] > biggest)
			biggest = nums[i];
		if (nums[i] < smallest)
			smallest = nums[i];
	}
	vector<int> counting(biggest - smallest + 1, 0);
	for (int i = 0; i < nums.size(); ++i)
	{
		counting[nums[i] - smallest]++;
	}

	int index = 0;
	for (int i = 0; i < counting.size();)
	{
		if (counting[i] != 0)
		{
			counting[i]--;
			nums[index] = i + smallest;
			index++;
		}
		else
		{
			++i;
		}
	}

	return;
}