//Tabassum Mustafa Authoy
//Sukd1902120
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
//variable declaration
     int a,b,c,d; 
     double QA,QB,QC,QD;
//value input by user
     cout<<"Enter the Value of a:";
     cin>>a;
     cout<<"Enter the Value of b:";
     cin>>b;
     cout<<"Enter the Value of c:";
     cin>>c;
     cout<<"Enter the Value of d:";
     cin>>d;
//process & calculation
     QA=(((c+a)*(a*b))+(6*(a))-((pow(2,2))/(b*c)));
     QB=(((a-b)*c%(a*b))+(a%d));
     QC=(((c/(a*b))+c)-(a*(3+8*(a*b))));
     QD=((a*b)*(c-a)+(((a*(pow(c,2)))+c)+a));
//Output
	cout<<"The result of QA is:"<<QA<<endl;
	cout<<"The result of QB is:"<<QB<<endl;
	cout<<"The result of QC is:"<<QC<<endl;
	cout<<"The result of QD is:"<<QD<<endl;
return 0;
}
