#include"heapSort.h"
#include<algorithm>

using namespace std;

void heapSort(vector<int>& nums)
{
	//��һ��������,�����Ѿ��Ǵӵ�һ����Ҷ�ӽڵ���Ϊ�Ӷѵ����Ѷ���ǰһֱ�������Ķ�
	int length = nums.size();
	for (int i = length / 2-1; i >= 0; --i)//�ѵĵ�һ����Ҷ�ӽڵ�Ϊlength/2
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

//�˺���Ϊ�Ѷ���Ҫ�����ĵ�������
void bigHeap(vector<int>& nums, int length,int root)//nums�����Ķѣ�rootҪ�����ĶѶ�λ�ã�length�����ѵĳ��ȷ�Χ
{
	int temp = nums[root];//��¼Ҫ��������
	int i = root;//i��¼temp���ڵ�λ��
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