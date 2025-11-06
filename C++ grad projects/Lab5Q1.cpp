//Tabassum Mustafa Authoy 
//SUKD1902120 
#include<iostream>
using namespace std;
int main()
{
	int number [10]={1,2,3,4,5,6,7,8,9,10};
	int  num=number[1];
	int maxNum=0;
	int minNum=0;
	int largest;
	int larger;
	
	for(int x=0;x<1;x++)
	{
		if(number[maxNum]<number[x])
		maxNum=x;
	}
	largest=number[maxNum];
	
	if(num>largest)
	{
		larger=num;
	}
	
	else
	{
		larger=largest;
	}
	
	cout<<"The max number is:"<<largest<<endl;
	cout<<"The num number is:"<<num<<endl;
	cout<<"The larger number is:"<<larger;
	return 0;
}
