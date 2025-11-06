//Shawal Ahammed Prince
//SUKD1902646

#include<iostream>
using namespace std;

int smallestIndex(int array[],int s);
int main()
{
	
int array[10];
int i,n,s_index;

cout<<"Enter size of array:"<<endl;
cin>>n;

cout<<"Enter elements:";
for(i=0;i<n;i++)
cin>>array[i];

s_index=smallestIndex(array, n);
cout<<"Smallest element"<<" "<<array[s_index]<<" "<<"at index:"<<s_index<<"\n";
system("pause");
return 0;
}

int smallestIndex(int array[],int size)
{
int i,s_smallest=0;
int min=array[0];
for(i=1;i<size;i++)
{
	
if(array[i]<min)
{
min=array[i];
s_smallest=i;
}

}
return s_smallest;

}
