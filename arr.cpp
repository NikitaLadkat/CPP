#include<iostream>
using namespace std ;

int main()
{

	int arr[30];
	int i , n;
	cout<<"the num are :"<<endl;
	cin>>n;
	for(i=0 ; i<n ;i++)
	{
		cin>>arr[i];
	}
	cout<<"the num are :"<<endl;
	for(i=0 ; i<n ; i++)
	{
		cout<<arr[i];
	}
	return 0;
}
