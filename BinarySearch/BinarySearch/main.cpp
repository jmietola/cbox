/*
*
Just playing around with binary and linear search. No idea.
*/

#include <iostream>
using namespace std;

int foo[10] = { 2, 16, 40, 77, 88, 99, 105, 120, 150 };
int n, result = 0;
int length = 10;


int sillySearch(int element) {

	//Figure out array length and make first split
	length = length / 2;
	result = foo[length];
	
		if (result < element) 
		{
			while (length<10) {
				result = foo[(length)];
				length++;
				if (result == element) {
					return result;
				}	
			}
		}
		else
		{
			while (length>0) {
				result = foo[(length)];
				length--;
				if (result == element) {
					return result;
				}
			}
		}
		
	return -1;
}

int main(int argc, char argv[])
{
	//first sort the array ascenging order
	int tell = sillySearch(40);
	cout << tell;
	cout << "Hello\n";
}