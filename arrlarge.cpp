#include<iostream>
using namespace std;

int small();
int great();
int n,grt,sml,i , arr[10];


int main()
{
cout<<"The elemennts in array are : "<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
great();
cout<<"large nummber is"<<grt<<endl;
small();
cout<<"small nummber is"<<sml<<endl;
}

int great()
{
grt=arr[0];
cout<<"The Array elements are :";
for(i=0 ; i<=n ;i++)
{
if(arr[i]>grt)
{
grt=arr[i];
cout<<arr[i]<<endl;
}
//return 0;
}
}



//small

int small()
{
sml=arr[0];
cout<<"The Array elements are :";
for(i=0 ; i<n ;i++)
{
if(arr[i]<sml)
{
sml=arr[i];
cout<<arr[i]<<endl;
}
}


}
