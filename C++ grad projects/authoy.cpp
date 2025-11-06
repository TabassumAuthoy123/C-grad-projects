//Tabassum mustafa Authoy 
//sukd1902120

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayMenu();
double smallcup(int quantity, double &price,double &amount,double &Sum);
double mediumcup(int quantity, double &price,double &amount,double &Sum);
double largecup(int quantity, double &price,double &amount,double &Sum);

int main ()

{
//variable declaration
	int quantity; 	
 	char choice,end;
	double price, amount, Sum;
	
//Program display
	 do
	 {
	 
 	cout<<"Rose barista coffeeshop is offering different sizes of coffee: Large=2.00 RM ,Medium=1.90 RM ,Small=1.75 RM \n"
 	<<"\n"
	<<  "Press L for Large size \n"
	<<"\n"
 	<< "Press M for Medium size \n"
 	<<"\n"
 	<< "Press S for Small size\n" <<endl;
 	
 	
//statement of input
 	cout<<"Enter the size of coffee: "<<"\n";
 	cin>>choice;
 	
 	cout<<"Enter the quantity:";
 	cin>>quantity;
 	
 	cout<<"Choice : "<<choice<<endl;
 	 
//condition of switch
 	switch (choice)
	 {
	 	case 'S' :
	 	case 's' :
	 
	 	smallcup( quantity, price, amount,Sum);
	    
		 break;
		 
		 case 'M' :
		 case 'm' :
	 
		mediumcup(quantity, price,  amount, Sum);
	
		 break;
		 
		 case 'L' :
		 case 'l' :

	    largecup( quantity, price, amount, Sum);
	  
		 break;
		 	 	
	default:
	      cout<<"Invalid code :"<<"\n"<<endl;	 
	
	 }
	

   
		
    cout << "Do you want to 'End' to exit from the program?\n" 
         <<"press 'Y' to end.press 'N' to continue. :";
    cin >> end;
}
	
    while(end=='n'||end=='N');
    {
    cout<<"End Program"<<"\n"<<endl;
	}
		 
   

//footer
	return 0;
	
	} 
	double smallcup(int quantity,double &price, double &amount, double &Sum)
	{
	     Sum=Sum+quantity;
		 price=price+(1.75*quantity);
		 amount=amount+(quantity*9);
		 cout<<"Now"<<endl;
		 cout<<"Number of cups:"<<Sum<<endl;
	     cout<<"Total amnount of Coffee sold "<<amount<<" oz"<<endl;
	     cout<<"Total Money made :RM"<<price<<"\n"<<endl;
	     Sum = Sum;
		 price = price;  
		 return Sum,price,amount;	
	}
	double mediumcup(int quantity,double &price, double &amount, double &Sum)
	{
	    Sum=Sum+quantity;
		price=price+(1.90*quantity);
		amount=amount+(quantity*12);
		cout<<"Now"<<endl;
		cout<<"Number of cups:"<<Sum<<endl;
	    cout<<"Total amnount of Coffee sold "<<amount<<" oz"<<endl;
	    cout<<"Total Money made :RM"<<price<<"\n"<<endl;
	    Sum = Sum;
	    price = price;
		return Sum,price,amount;	
	}
	double largecup(int quantity,double &price, double &amount, double &Sum)
	{
	    Sum=Sum+quantity;
		price=price+(2.00*quantity);
		amount=amount+(quantity*15);
		cout<<"Now"<<endl;
		cout<<"Number of cups:"<<Sum<<endl;
	    cout<<"Total amnount of Coffee sold "<<amount<<" oz"<<endl;
	    cout<<"Total Money made :RM"<<price<<"\n"<<endl;
	    Sum = Sum;
	    price = price; 
		return Sum,price,amount;	
	}	
	
	
	
	
	
