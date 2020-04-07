#include<iostream>
using namespace std;

int main()
{
int a,b,c,ch ;
cout<<"To find the Area of :"<<endl;

cout<<"1.Circle\n2.rectangle\n3.Triangle\n4.Circumference\n5.Right angles triangle\n6.Square\n";

do
{
cout<<"enter your choice :\n";
cin>>ch;

switch(ch)
{
case 1://circle
cout<<"Enter the radius : \n";
cin>>a;
c=2*3.14*a*a;
cout<<"Area of Circle\n"<<c;
break;

case 2://Rectangle
cout<<"Enter the length and breadth\n";
cin>>a>>b;
c=a*b;
cout<<"Area of Rectangle\n"<<c;
break;

case 3://Triangle
cout<<"Enter the height and breadth\n";
cin>>a>>b;
c=0.5*a*b;
cout<<"Area of Triangle\n"<<c;
break;

case 5://Right angle Triangle
cout<<"Enter the base and perpendicular";
cin>>a>>b;
c=0.5*a*b;
cout<<"Area of Right angled triangle"<<c;
break;

case 4://Circumference
cout<<"Enter the radius";
cin>>a;
c=2*3.14*a;
cout<<"Area of Circle"<<c;
break;

case 6://Square
cout<<"Enter the side";
cin>>a;
c=a*a;
cout<<"Area of Square"<<c;
break ;

default :
cout<<"Invalid..";
break; 

return 0;
}
}
while(ch!=7);
}
