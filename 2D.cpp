#include<iostream>
using namespace std ;

int main()
{

	int arr[30][10], i, j;
	cout<<"the num are :"<<endl;
	for(i=0 ; i<2 ;i++)
	{
	for(j=0; j<2;j++)
	{
	
		cin>>arr[i][j];
	}
	}
	

	cout<<"The 2D Array is:";
	for(i=0 ; i<2 ;i++)
	{
	cout<<"\n";
	for(j=0; j<2;j++)
	{

		cout<<arr[i][j]<<"\t";
	}}


	return 0;
}
