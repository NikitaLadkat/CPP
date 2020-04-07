#include<iostream>
using namespace std ;

int main()
{

	int arr1[20], arr2[20], ab[90];
	int i , j ;
	cout<<"the num are :"<<endl;
	for(i=1 ; i<=2 ;i++)
	{
		cin>>arr1[i];
	}

	for(i=1; i<=2 ;i++)
	{
		cin>>arr2[i];
	}


	cout<<"Addition:";
	for(i=1 ; i<=2 ;i++)
	{
	
		ab[i]=arr1[i]+arr2[i];
		cout<<ab[i]<<"\t";
	}


}
