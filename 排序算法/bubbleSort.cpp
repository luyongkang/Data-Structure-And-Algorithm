#include"bubbleSort.h"
#include<algorithm>

using namespace std;

void bubbleSort(vector<int>& array)
{
	if (array.size() <=1 ) {
		return;
	}
	int arrayLength = array.size();
	for (int i = 0; i != arrayLength - 1; i++) {
		for (int j = 0; j != arrayLength - i - 1; j++) {
			if (array.at(j) > array.at(j + 1)) {
				swap(array.at(j), array.at(j + 1));
			}
		}
	}


	return;
}

