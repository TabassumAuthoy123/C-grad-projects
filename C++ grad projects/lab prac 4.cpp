#include <iostream>
using namespace std;

int main()
{
  double milk;
  double carton,cost,profit;
  
  cout<<"Enter the total amount of milk produced in the morning:";
  cin>>milk;	

  carton=milk/3.78;
  cost=milk*0.38;
  profit=carton*0.27;
  
  cout<<"The number of miilk cartons needed to hold milk is:" <<carton<<"litres"<<endl;
  cout<<"The cost of producing milk is : RM " <<cost<<endl;
  cout<<"The profit for producing milk is : RM " <<profit<<endl;
  
return 0;
	
	
	
	
}
