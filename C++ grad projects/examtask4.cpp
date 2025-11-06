#include <iostream>
using namespace std;
double calsalary (int,double);
int main()
{	int workhr;
	double ratehr, salary;
	
	cout<<"Enter working hours & rate per hour:";
	cin>>workhr>>ratehr;
	salary=calsalary(workhr,ratehr);
	cout<<"Salary today is RM"<<salary<<endl;
return 0;
}
double calsalary (int wh,double rh)
{
	double salary;
	salary=wh*rh;
	return salary;
}
