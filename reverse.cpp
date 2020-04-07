#include<iostream>
using namespace std;

int main()
{
long int i,num,rem;
cout<<"Enter any number";
cin>>num;
cout<<"Reverse number is";
while(num!=0)
{
rem=num%10;
cout<<""<<rem;
num=num/10;
}
return 0;

}

