//Tabassum Mustafa Authoy
//SUKD1902120
#include<iostream>
using namespace std;
int smallestIndex(int list[], int listSize);
int main()
{
	int alpha[20];
	cout << "The index of the first occurrence of the smallest element in the array is " << smallestIndex(alpha,20) << endl;
	return 0;
}
int smallestIndex(int list[], int listSize)
{
	int counter;
	int minIndex = 0;
	for (counter = 1; counter < listSize; counter++)
		if (list[minIndex] > list[counter])
			minIndex = counter;
	return minIndex;
}
