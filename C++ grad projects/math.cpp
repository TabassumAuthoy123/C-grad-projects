//MD NAIMUZZAMAN SANTO
//SUKD1902378


/*Adding Standerd Libraries*/
# include <iostream>
using namespace std;

/*Start Of Main Program*/
int main ()
 {
	/*Declaring Variables*/
 	char option;
	double price, quantity, weight;
	int end;
	
	/*Display Of The Program*/
 	cout<<"We offer Coffee at three different sizes: Large at RM 2.00, Medium at RM 1.90 and Small at RM 1.75:\n"
 	<<"\n"
	<<  "Press L for Large size \n"
	<<"\n"
 	<< "Press M for Medium size \n"
 	<<"\n"
 	<< "Press S for Small size"<<"\n" <<"\n" <<endl;
 	
 	/*Asking For User Input*/
 	cout<<"Enter the size of coffee: ";
 	cin>>option;
 	
 	cout<<"Enter the quantity:";
 	cin>>quantity;
 	
 	cout<<"Option : "<<option<<endl;
 	
 	/*Setiing Conditions*/
 	if(option=='l' || option=='l')
	 	{
		 price=2*quantity;
		 weight=quantity*15;
		 cout<<"Cup Size :"<<option<<endl;
		 cout<<"Number of cups:"<<quantity<<endl;
		 cout<<"Total Money made :RM"<<price<<endl;
		 cout<<"Total amnount of Coffee sold "<<weight<<" oz"<<"\n"<<"\n"<<endl;
		}
		
	else if(option=='M' || option=='m')
		{
		 price=1.90*quantity;
		 weight=quantity*12;
		 cout<<"Cup Size :"<<option<<endl;
		 cout<<"Number of cups:"<<quantity<<endl;
		 cout<<"Total Money made :RM"<<price<<endl;
		 cout<<"Total amnount of Coffee sold "<<weight<<" oz"<<"\n"<<"\n"<<endl;
		}
		
	else if(option=='S' || option=='s')	 
		{ 
		 price=1.75*quantity;
		 weight=quantity*9;
		 cout<<"Cup Size :"<<option<<endl;
		 cout<<"Number of cups:"<<quantity<<endl;
		 cout<<"Total Money made :RM"<<price<<endl;
		 cout<<"Total amnount of Coffee sold "<<weight<<" oz"<<"\n"<<"\n"<<endl;
		}
		
	else
		{
		 cout<<"Invalid option"<<"\n"<<"\n"<<endl;
		}
	
	/*Exit Command*/		
	cout << "Type 'end' to exit." << endl;
    cin >> end;
	  
	return 0; 
	} 
	/*End Of Program*/
 
