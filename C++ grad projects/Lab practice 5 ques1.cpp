//Shawal Ahammed Prince
//SUKD1902646

#include<iostream>
using namespace std;

void Two_largest(int arr[],int arr_size)
{
	int i,first,second;
	
	if(arr_size<2)
	{
		cout<<"invalid Input";
	}
	
	first=second=INT_MIN;
	for (i=0;i<arr_size;i++)
	{
		if (arr[i]>first)
		{
			second=first;
			first=arr[i];
			
		}
		else if (arr[i]>second)
		{
			second=arr[i];
		}
	}
	cout<<"\nTwo largest numbers are Max and Num : "<<first<<" and "<<second<<endl;
	
	if(first>second)
	{
	cout<<"\nFirst number : "<<first<<" is larger\n";
		
	}
	else
	cout<<"Second number :"<<second<<" is larger\n";
    }

    int main()
   {

    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    Two_largest(nums, n);

    return 0;
    }
