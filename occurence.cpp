#include<iostream>
using namespace std;

int counting();
int arr[50], n , i , count , num ;

int main()
{
cout<<"Enter the numbers : ";
cin>>n;
for (i=0 ; i<n ; i++)
{
cin>>arr[i];
}

cout<<"The Array to be checked is : "<<endl;
for (i=0 ; i<n ; i++)
{
cout<<arr[i]<<endl;
}
counting();
//return 0;
}

int counting()
{
cout<<"Enter the number Occured:"<<endl ;
cin>>num ;
count = 0;
for (i=0 ; i<n ; i++)
{
if(arr[i]==num)
count++;
}
cout<<"the number is occured following times : "<<count<<endl;
}
