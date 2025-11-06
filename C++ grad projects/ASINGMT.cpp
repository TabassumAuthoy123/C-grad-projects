//Tabassum Mustafa Authoy(SUKD1902120)
    /*Adding Standerd Libraries*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void displayMenu();
double smallcup(int quantity, double &price,double &totalamount,double &Sum);
double mediumcup(int quantity, double &price,double &totalamount,double &Sum);
double largecup(int quantity, double &price,double &totalamount,double &Sum);
	/*Start Of Main Program*/
int main ()                                                
{
	int choice;
	int largecup,smallcup,mediumcup,totalcup=0;
	int totalsmallcup=0,totalmediumcup=0,totallargecup=0;          
	double totalamount;
	char respond;
	
	
//statement of input
 	do {                                                   
 	
    cout<<"   Wellcome to Rose barista coffee shop,what would you like to order :"<<endl;
    cout<<endl;
	cout<<"  press 1 to 'Buy Coffee' :"<<endl;
	cout<<"  Press 2 to 'Display the cup of coffee sold in each size' :"<<endl;
	cout<<"  Press 3 to 'Total cup of coffee sold':"<<endl;
	cout<<"  Press 4 to 'Total amount of money earned by coffee' :"<<endl; 
	cin>>choice;
	cout<<endl;
	
//condition of switch
	switch (choice) {                                     
	
		
	case 1:
		
	    cout<<"         ''''''''''Shop Menu''''''''\n      ......Small cup ( Price RM1.75 ).....\n      ......Medium cup ( Price RM1.90 )......\n       .....Large cup ( Price RM2.00 )......\n Select the size of cup if you don't like to buy \nthe certain size of cup leas enter '0'"<<endl;
	    cout<<endl;
       	cout<<"      Small cup would you like to purchase:";
       	cin>>smallcup;
    	totalsmallcup=totalsmallcup+smallcup;
   	    cout<<"     Medium cup would you like to purchase:";
	    cin>>mediumcup;
	    totalmediumcup=totalmediumcup+mediumcup;
	    cout<<"     Large cup would you like to purchase:";
	    cin>>largecup;
	    totallargecup=totallargecup+largecup;
	    cout<<endl;
	    cout<<" Your order "<<smallcup<<" small cup "<<mediumcup<<" medium cup and "<<largecup<<" large cup "<<endl;
	
    break;
    
    
    
    
    case 2:
    	
    	cout<<"Total Small cup of coffee sold..........."<<totalsmallcup;
		cout<<"\nTotal Medium cup of coffee sold.........."<<totalmediumcup;
		cout<<"\nTotal large cup  of coffee sold.........."<<totallargecup;
	
	break;
	
	case 3:
	  totalcup=totalsmallcup+totalmediumcup+totallargecup;
	  cout<<"Total cup of coffee sold : "<< totalcup <<endl;
	
	break;

	case 4:
		totalamount=(totalsmallcup*1.75)+(totalmediumcup*1.90)+(totallargecup*2.00);
		cout<<"Total amount earned by sold coffee : RM"<< totalamount <<endl;
	
	break;	
	
	default :	
	
		cout<<"Invalid slection! ";
		
            }    
   
	cout<<endl;
	cout<<endl;
	cout<<"Would you like to run this program again (press Y for Yes and N for No)"<<endl;
    cin>>respond;
            
        }                                                                        
	
         while (respond=='y' || respond=='Y');
         
         //footer
         
    return 0;                                      
	                                            
}                                  
