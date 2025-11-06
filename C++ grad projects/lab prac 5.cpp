#include <iostream>
using namespace std;

int main()
{
	int length, height;
	double paint, TotalArea, l, h;
	
	cout<<"Enter the length in feet:" ;
	cin>>length;
	cout<<"Enter the height in feet:";
	cin>>height;
	TotalArea=length*height;
	paint=TotalArea/120;
	cout<<"The total area of the room is:"<<TotalArea<<"square feet"<<endl;
	cout<<"The amount of paint needed to paint the walls of the room is:"<<paint<<"gallon"<<endl;
return 0;
	
	
	
}
