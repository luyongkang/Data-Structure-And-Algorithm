#include"bubbleSort.h"
#include"insertSort.h"
#include"selectSort.h"
#include"shellSort.h"
#include"quickSort.h"
#include"mergeSort.h"
#include<iostream>

using namespace std;

int main() {
	vector<int> array = { 2,3,543,46,123,123,6,345,7,4,9,131313,34234234,21,32123 };
	vector<int> array2;

	quickSort(array,0,array.size()-1);

	for (auto i : array) {
		cout << i << "   ";
	}

	return 0;
}