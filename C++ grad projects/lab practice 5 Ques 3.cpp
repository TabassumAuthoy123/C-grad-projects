//Shawal Ahammed Prince
//SUKD1902646

#include<iostream>
using namespace std;

double Cylinder(double m_height,double m_radius) 
{
	double volume;
	double PI=3.1416;
	volume=(3.1416*m_radius * m_radius * m_height);
	return volume;
	
}
double Cone(double m_height,double m_radius) 
{
	double volume;
	double PI= 3.1416;
	volume=(3.1416*m_radius * m_radius*m_height)/3 ;
	return volume;
	
}
int main()
{
	double m_height;
	double m_radius;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<<"Enter radius and height :";
	cin>>m_height>>m_radius;
	
	cout<<"Volume of Cylinder :"<<Cylinder(m_height,m_radius);
	cout<<"\nVolume of Cone :"<<Cone(m_height,m_radius);
	return 0;
}
