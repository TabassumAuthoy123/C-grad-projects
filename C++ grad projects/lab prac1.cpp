//Tabassum Mustafa Authoy
//sukd1902120
//lab practice 1 question1

//step1:header
 
#include<iostream>
using namespace std;

//step2:main method
int main()
{
//step3:body
//declare variable[input & output]		
   int feet;
   int inches;
   double cm;
   double x,I,feeet,total;
//input statement
  cout<<"Enter the value of length in feet:";
  cin>>feet;
  cout<<"Enter the value of Length in inches:";
  cin>>inches;
//process[formula]
//cm=20.48
feeet=feet*12; //totalfeet
I=inches*2.54; //total inches
x=feet+I;
//formula
total=(12*feet)+inches;
cm=2.46*total;
cout<<"The total lenght in cm is:" <<x<<endl;

//step5:footer
return 0;
		
}

