//Tabassum Mustafa Authoy
//SUKD1902120 
#include<iostream>
#include<iomanip>
using namespace std;
double cone_volume,cylinder_volume;
double getValue(double&ra,double&hei);
double calVolume(double ra,double hei);
double cone(double ra,double hei);
double cylinder(double ra,double hei);
const double PI=3.14;
int main()
{
	double ra;
	double hei;
    getValue(ra,hei);
    calVolume(ra,hei);
}
double getValue(double&ra,double&hei)
{
	cout<<"Enter the value of radius:";
	cin>>ra;
	cout<<"Enter the Value of height:";
	cin>>hei;
}
double calVolume(double ra,double hei)
{
    cout<<fixed<<showpoint<<setprecision(2);
	cout<<"The volume of cone is:"<<"\t\t"<<cone(ra,hei) <<"cubic meters"<<endl;
	cout<<"The volume of cylinder is:"<<"\t"<<cylinder(ra,hei)<<"cubic meters"<<endl;
}
double cone(double ra,double hei)
{
	return(PI*ra*ra*hei/3);
}
double cylinder(double ra,double hei)
{
	return(PI*ra*ra*hei);
}
