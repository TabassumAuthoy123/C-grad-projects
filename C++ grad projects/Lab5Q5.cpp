//Tabassum Mustafa Authoy
//SUKD1902120
#include<iostream>
using namespace std;
int main()
{
	int staff_id[10],total_salary;
	double totalhours[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter you staff ID:";
		cin>>staff_id[i];
		cout<<endl;
		
		cout<<"Enter your Total Hours of working by month:";
		cin>>totalhours[i];
		cout<<endl;
	}
	cout<<"Staff ID:"<<endl<<endl;
	cout<<" total salary for the each staffId:"<<endl;
	for(int x=0;x<10;x++)
	{
		int i=x;
		total_salary=totalhours[i]*25;
		cout<<i+1<<"."<<staff_id[x]<<"\t\t\t"<<total_salary<<endl;
	}
	return 0;
 } 
