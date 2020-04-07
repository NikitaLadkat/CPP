#include<iostream>
using namespace std;

int main()
{
long int i,num,rem,rem1, count=0;
cout<<"Enter any number";
cin>>num;
rem=num%10;
cout<<"The last number is :"<<rem;
while(num!=0)
{

rem1=num%10;
if(rem==rem1)
{
count++;
}
num=num/10;
}

cout<<"the count is:"<<count;
return 0;

}

