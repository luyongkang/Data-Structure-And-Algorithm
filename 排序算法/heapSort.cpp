#include"heapSort.h"
#include<algorithm>

using namespace std;

void heapSort(vector<int>& nums)
{
	//第一步构建堆,构建堆就是从第一个非叶子节点做为子堆调整堆顶向前一直到完整的堆
	int length = nums.size();
	for (int i = length / 2-1; i >= 0; --i)//堆的第一个非叶子节点为length/2
	{
		bigHeap(nums, length, i);
	}
	
	for (int i = 1; i < length; ++i)
	{
		swap(nums[0], nums[length - i]);
		bigHeap(nums, length - i, 0);
	}

	return;
	
}

//此函数为堆顶需要调整的调整函数
void bigHeap(vector<int>& nums, int length,int root)//nums完整的堆，root要调整的堆顶位置，length完整堆的长度范围
{
	int temp = nums[root];//记录要调整的数
	int i = root;//i记录temp所在的位置
	for (i = root; i * 2 + 1 < length;)
	{
		if (i * 2 + 2 < length)
		{
			i = nums[i * 2 + 2] > nums[i * 2 + 1] ? (i * 2 + 2) : (i * 2 + 1);
		}
		else
			i = i * 2 + 1;

		if (nums[i] > temp)
			nums[(i - 1) / 2] = nums[i];
		else
		{
			i = (i - 1) / 2;
			break;
		}
	}
	nums[i] = temp;
	
	return;
}

/*
					0
			1				2
		3		4		5		6
	7		

*/