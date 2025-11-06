//question 1
#include <iostream>
using namespace std;
int main ()
{
	double feet, inches;
	double cm1, cm2; //cm-centimeters
	cout<<"Enter value in feet: ";
	cin>>feet;
	cout<<"Enter value in inches";
	cin>>inches;
	
cm1=feet*0.394;
	cm2=inches/2.54;
	
	cout<<feet<<" feet into cm is "<<cm1<<endl;
	cout<<inches<<" inches into cm is "<<cm2<<endl;
		return 0;
}
