#include<iostream>
using namespace std;
int main()
{
		int num[5];                                //Declare anarray of 5 integer
        int *ptr=num;                              // Pointer pointing to the first element of array
        int sum=0;
     	int max;
     	cout<<"Enter 5 Numbers"<<endl;             //Input using Pointer
	    for(int i=0;i<5;i++) 
		{
		cout<<"Number"<<i+1<<":";
		cin>>*(ptr+i);                             //Using pointer arithmetic to access array element
    	}  
		max=*ptr;                                   //Initialize max with the first element
		for(int i=0;i<5;i++)                      //calculate sum and find maximum using pointer
	{
		sum+=*(ptr+i);                               //Add value at address (ptr+i)
		if(*(ptr+i)>max)
		max=*(ptr+i);
	}
	cout<<"\nYou entered:" ;                             //Display result
	for(int i=0;i<5;i++)
	{
		cout<<*(ptr+i)<<" ";
    }
    cout<<"\nSum of numbers= "<<sum;
	cout<<"\nMaximum number= "<<max<<endl;
	return 0;
    }
