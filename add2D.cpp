#include<iostream>
using namespace std ;

int main()
{

	int arr1[30][10],arr2[30][10], i, j, res[30][10];
	cout<<"the Array 1 is :"<<endl;
	for(i=0 ; i<2 ;i++)
	{
	for(j=0; j<2;j++)
	{

		cin>>arr1[i][j];
	}
	}

	cout<<"the Array  2 is :"<<endl;
	for(i=0 ; i<2 ;i++)
	{
	for(j=0; j<2;j++)
	{

		cin>>arr2[i][j];
	}
	}
	

	cout<<"The 2D Array is:";
	for(i=0 ; i<2 ;i++)
	{
	cout<<"\n";
	for(j=0; j<2;j++)
	{
		res[i][j]= arr1[i][j]+arr2[i][j];
		cout<<res[i][j]<<"\t";
	}}


	return 0;
}
