//Shawal Ahammed Prince
//SUKD1902646

#include <iostream>
using namespace std;

double Caldensity(double mass,double volume)
{
	double density;
	density=mass/volume;
	return density;
	
}
int main()
{
	double mass;
	double volume;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<<"Enter the value of mass and volume :";
	cin>>mass>>volume;
	
	cout<<"The value of density :"<<Caldensity(mass,volume);
	return 0;
	
}
