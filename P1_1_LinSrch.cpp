#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int arr[10], i, num, n, pos;
	bool numFound = false;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter Array Elements:\n";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search:\t";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
		    numFound=true;
			pos=i+1;
			break;
		}
	}

	if(numFound)
		cout<<num<<" found at position "<<pos;
	else
		cout<<"Number not found..!!";
	getch();
}
