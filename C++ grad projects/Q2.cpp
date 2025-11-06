
//SUKD1902117 LIGUODONG Q2

#include<iostream>
using namespace std;

double density(double,double);

double density(double mass,double volume)
{double density;
density=mass/volume;
return density;
}
int main()
{
	double mass,volume,density;
	
	cout<<"Enter the value of block mass:";
	cin>>mass;
	cout<<"Enter the value of block volume:";
	cin>>volume;
	
	
	density=mass/volume;
	
	cout<<"\n The  density of the block is:"<<density<<endl<<endl;
	return 0;
	}
