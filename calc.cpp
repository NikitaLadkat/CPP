#include<iostream>

using namespace std ;
 

class calculate
{
public :

virtual void cal()=0 ;

};


class sqr : calculate
{

public:

void cal()
{
	int a,c ;
	cout<<"enter the number";
	cin>>a ;
	c = a*a ;
	cout<<"Square is"<<c<<endl ;

}

};


class cube : calculate
{

public:

void cal()
{
	int a,c ;
	cout<<"enter the number";
	cin>>a ;
	c = a*a*a ;
	cout<<"Cube is"<<c<<endl ;

}

};


int main()
{


sqr s ;
cube c ;

s.cal() ;
c.cal();
return 0 ;
}


