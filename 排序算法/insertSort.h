#ifndef INSERTSORT_H
#define INSERTSORT_H
#include<vector>

//��������---ƽ��ʱ�临�Ӷ�O(n^2),�ʱ�临�Ӷ�O(n^2),���ʱ�临�Ӷ�O(n),�ȶ�
/*
����һ������A[0,n]���������⣬������Ϊ������A[0,n-1]����������Ѿ�����ˡ�
����A[n]��ֵ����������ɨ����������A[0,n-1]��ֱ����һ��С�ڵ���A[n]��Ԫ�أ���A[n]�������Ԫ�صĺ��档
*/

void insertSort(std::vector<int>& array);

#endif