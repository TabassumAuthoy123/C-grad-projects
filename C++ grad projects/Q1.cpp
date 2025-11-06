//SUKD1902117 LIGUODONG Q1
#include<iostream>
using namespace std;
int main()
{
	int number [10]={10,20,30,40,50,60,70,80,90,100};
	int  num=number[1];
	int maxNum=0;
	int minNum=0;
	int largest;
	int larger;
	
	for(int x=0;x<10;x++)
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
	cout<<"The num number on is:"<<num<<endl;
	cout<<"The larger number is:"<<larger;
	return 0;
}
