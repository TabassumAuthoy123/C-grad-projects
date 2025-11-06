//question 3

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main ()
{
	double a, b, c, d, q1, q2, q3, q4;
	cout<<setw(10)<<"a = ";
	cin>>a;
		cout<<setw(10)<<"b = ";
	cin>>b;
		cout<<setw(10)<<"c = ";
	cin>>c;
		cout<<setw(10)<<"d = ";
	cin>>d;
	
	q1=pow(d,d)-c+a*a*b+3*a-pow(2,2)/(d*c);
	q2=d/c/(a*b)+c-d*(5+8*a*b);
	q3=(a*b*c*c+d-a)+(a*b*pow(c,3)+c-d*(a*d))+a-b-pow(c,c);
	q4=(b/c)*c*d+a*b-d+(a+c*a*b)*a*d;
cout<<"\n";
	cout<<"d^d-c+a*ab+3(a)-2^2/(dc) = "<<q1<<endl;
cout<<"\n";
	cout<<"d/c/ab+c-d(5+8*ab) = "<<q2<<endl;
cout<<"\n";
	cout<<"(abc*c+d-a)+(abc^3+c-d*(ad))+a-b-c^c = "<<q3<<endl;
	cout<<"\n";
	cout<<"b/c*cd+ab-d+(a+c*ab)*ad = "<<q4<<endl;
	return 0;
}
