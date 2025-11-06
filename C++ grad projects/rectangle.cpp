#include<iostream>
//#include<math.h>

using namespace std;

int main()
{
  double length;
  double width;
  double perimeter;
  double area;
   
  
   cout<<"enter length = " << endl;
   cin>>length;	
   cout<<"enter width = " << endl;
   cin>>width;	
   
   perimeter=2*(length+width);
   area=length*width;
   
 	cout<<"perimeter="<<perimeter<<endl;
 	cout<<"area="<<area<<endl;
	
 return 0;	
}
