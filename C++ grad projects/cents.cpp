//question 2
#include <iostream>
using namespace std;
int main ()
{
double cents;
double half_dollars, quarters, nickels, dimes, pennies, remaining;

cout<<"enter value in cents: ";
cin>>cents;

half_dollars=(int)cents/50;
remaining=(int)cents%50;
quarters=(int)remaining/25;
remaining=(int)remaining%25;
dimes=(int)remaining/10;
remaining=(int)remaining%10;
nickels=(int)remaining/5;
remaining=(int)remaining%5;
pennies=(int)remaining;
cout<<endl;
cout<<cents<<" cents equal to "<<half_dollars<<" half dollars "<<quarters<<" quarters "<<dimes<<" dimes "<<nickels<<" nickels "<<pennies<<" pennies";
return 0;
}
