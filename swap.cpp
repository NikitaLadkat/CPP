#include<iostream>
using namespace std;

int main()
{
int a,b,c ;
cout<<"Enter any two numbers :"<<endl;
cin>>a>>b;
cout<<"the numbers are :"<<a<<b;
c=a;
a=b;
b=c;
cout<<"the numbers after swapping are :"<<a<<b;

return 0;
}


