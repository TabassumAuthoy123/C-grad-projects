 #include<iostream>
using namespace std;
int main()
{
int cookie;
const int box=cookie/24;
const int container=box/75;
float leftC;
int leftB;
int numC,numB;
cout<<"enter the number of cookies";
cin>>numC;
cout<<"the number of boxes needed to hold the cookies"<<endl;
//box=numC/cookie;
cout<<box<<endl;
leftC=numC%box;
cout<<"leftover cookies = "" "<<leftC<<endl;
cout<<"the number of container needed to store the boxes"<<endl;
cout<<container<<endl;
leftB=box%container;
cout<<"leftover boxes =" <<leftB;
return 0;

}
