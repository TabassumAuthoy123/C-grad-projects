//Tabassum mustafa Authoy
//sukd1902120
/* standard libraries */
#include <iostream>
 
using namespace std;
/* main program */
int main()
{
 /*variables*/
 char Choice;
 string Name;
 int minutes;
 
 
 /*program display*/
 cout<<"  The mobile phone service has different Subscription pakages: package A=$39.99 per month, package B= $59.99 per month, package C= $69.99 per month\n"
 <<endl;
 cout<< "Press 'A' for the  package A \n "
 <<"\n"<<endl;
 cout<< "Press 'B' for the package B \n "
 <<"\n"<<endl;
 cout<< "Press 'C' for the package C \n  "<<"\n"
 <<endl;
for(;;)
{
    // user's input //
 cout<< "Enter the customer Name : ";
 cin>>Name;
 
 cout<< "Enter the package choice : ";
 cin>>Choice;
 
 while(Choice!='A' &&  Choice!='a' && Choice!='B' && Choice!='b' && Choice!='C' && Choice!='c' )
 {cout<<"n\Error! You must select a choice A,B,C.";
 cout<<"Enter the package purchased:";
 cin>>Choice;
 }
 
 cout<< "Enter the  minutes used : ";
 cin>>minutes;
 
 /*cout<< "Total amount due : ";
 cin>>bill;*/
 
 cout<< "choice :" <<Choice<<endl;
 cin.get();
 // conditions //
  if( Choice=='A' || Choice=='a')
    {
	if (minutes<=450)
    cout<<"\nMonthly fees are : $39.99";
    else cout<<"\nMonthly fees are: $"<<39.99+(minutes-450);}
     
 
  if( Choice=='B' || Choice=='b')
    {
    if (minutes<=900)
    cout<<"\nMonthly fees are : $14.95";
    else cout<<"\nMonthly fees are: $"<<14.95+(minutes-450);}
     
   if( Choice=='C' || Choice=='c')
    cout<<"\nMonthly fees are : $69.99";

    else
    {
     cout<< "Invalid option"<<"\n"<<endl;
    }
 
  // final/escape command //
   cout <<"Press 1 To Continue or Press Any Number To Stop"<<endl;
   int stop;
   cin>>stop;
   if(stop==1) continue;
   else break;
}
cin.get();
return 0;
}

