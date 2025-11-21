#include<iostream>
using namespace std;
int main()
{
	int num[5];                                //Declare anarray of 5 integer
	int sum=0;
	int max;
	cout<<"Enter 5 Numbers"<<endl;
	for(int i=0;i<5;i++)                          //Input value into array
	{
		cout<<"Number"<<i+1<<":";
		cin>>num[i];
	}
	max=num[0];                               // Initialize max with the first element
	for(int i=0;i<5;i++)                      //calculate sum and find maximum
	{
		sum+=num[i];
		if(num[i]>max)
		max=num[i];
	}
	cout<<"\nYou entered:";                   //Display result
	for(int i=0;i<5;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<"\nSum of numbers= "<<sum;
	cout<<"\nMaximum number= "<<max<<endl;
	return 0;
}
