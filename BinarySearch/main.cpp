/*
*
Implementing binary search
*/

#include <iostream>
using namespace std;

//get rid of fixed array 
int foo[10] = { 2, 16, 40, 77, 88, 99, 105, 120, 150 };

int sillySearch(int element) {

	int minIndex = 0;
	int maxIndex = 10 - 1; //array.length here plz
	int curElement, curIndex;

	while (minIndex < maxIndex) {

		curIndex = (minIndex + maxIndex) / 2 | 0;
		curElement = foo[curIndex];

		if (curElement < element)
		{
			minIndex = curIndex + 1;
		}
		else if (curElement > element)
		{
			maxIndex = curIndex + 1;
		}
		else {
			return curIndex;
		}
	}

	return -1;
}

int main(int argc, char argv[])
{
	//first sort the array ascenging order
	int tell = sillySearch(40);
	cout << tell;
	cout << "Hello World Once Again!\n";
}