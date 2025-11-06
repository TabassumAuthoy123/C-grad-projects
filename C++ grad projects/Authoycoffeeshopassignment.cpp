//tabassum mustafa Authoy
//sukd1902120

/* standard libraries */
#include <iostream>
#include <math.h>

using namespace std;
/* main program */
int main()
{
 /*variables*/
 char Choice;
 double Price,Quantity,Amount;
 int End;
 
 /*program display*/ 
 cout<<" Rose barista coffeeshop is offering different sizes of coffee: Small=1.75 RM, Medium=1.90 RM, Large=2.00 RM \n"
 <<"\n"
 << "Press 'S' for the small size coffee \n " 
 <<"\n"
 << "Press 'M' for the medium size coffee \n "
 <<"\n"
 << "Press 'L' for the large size coffee \n  "<<"\n"
 <<endl;	
	
 // user's input //
 cout<< "Enter the size of coffee : ";
 cin>>Choice;
 
 
 cout<< "Enter the quantity of coffee : ";
 cin>>Quantity;
 
 cout<< "choice :" <<Choice<<endl;
	
 // conditions //
 if( Choice=='S' || Choice=='s')
    {
     Price=1.75*Quantity;
     Amount=Quantity*9;
	 cout<<"Coffee cup's size:"<<Choice<<endl;
	 cout<<"Number of Coffee cup's:"<<Quantity<<endl;
	 cout<<"Total Money made: RM"<<Price<<endl;
	 cout<<"Total Amount of Coffee sold:"<<Amount<<"oz"<<"\n"<<endl;
	 	
	}
	
 else if( Choice=='M' || Choice=='m')
    {
     Price=1.90*Quantity;
     Amount=Quantity*12;
	 cout<<"Coffee cup's size:"<<Choice<<endl;
	 cout<<"Number of Coffee cup's:"<<Quantity<<endl;
	 cout<<"Total Money made: RM"<<Price<<endl;
	 cout<<"Total Amount of Coffee sold:"<<Amount<<"oz"<<"\n"<<endl;
	 	
	}
	
	else if( Choice=='L' || Choice=='l')
    {
     Price=2.00*Quantity;
     Amount=Quantity*15;
	 cout<<"Coffee cup's size:"<<Choice<<endl;
	 cout<<"Number of Coffee cup's:"<<Quantity<<endl;
	 cout<<"Total Money made: RM"<<Price<<endl;
	 cout<<"Total Amount of Coffee sold:"<<Amount<<"oz"<<"\n"<<endl;
	 	
	}
	
	else
	{
     cout<< "Invalid option"<<"\n"<<endl;
		
	}
	
  // final/escape command //
   cout <<"Type 'End' to finish."<<endl;
   cin>>End;

	
/*	if( Choice=='S' || Choice=='s')
    {
     Price=1.75*Quantity;
     Amount=Quantity*9;
	 cout<<"Coffee cup's size:"<<Choice<<endl;
	 cout<<"Number of Coffee cup's:"<<Quantity<<endl;
	 cout<<"Total Money made:"<<Price<<endl;
	 cout<<"Total Amount of Coffee sold:"<<Amount<<"oz"<<"\n"<<endl; 
	 	
	} */
	
	
	
	
	
	
return 0;	
}