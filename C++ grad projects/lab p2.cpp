
//Tabassum mustafa authoy
//sukd1902120
//lab practice 1- question 1
 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double cents;
	double halfdollars;
	double quarters;
	double dimes;
	double nickels;
	double pennies;
	
	cout<<"Enter the change in cents:";
	cin>>cents;
	
	halfdollars=cents/50;
	quarters=cents/25;
	dimes=cents/10;
	nickels=cents/5;
	pennies=cents;
	  
	cout<<"The change in half-dollars is:"<<halfdollars<<endl;
	cout<<"The change in quarters is:"<<quarters<<endl;
	cout<<"The change in nickels is:"<<nickels<<endl;
	cout<<"The change in pennies is:"<<pennies<<endl;
	
return 0;
		
}
