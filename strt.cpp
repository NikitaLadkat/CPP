#include<iostream>
using namespace std;


class emp
{
	public:
	int id ;
	string name ;
	float sal;
};

int main()
{

	emp e1;
	emp e2;
	

	e1.id = 1001 ;
	e2.id = 2002 ;
	e1.name = "ram" ;
	e2.name = "sham" ;
	e1.sal = 200 ;
	e2.sal = 300 ;

	cout<<"ID ="<<e1.id<<endl ;
	cout<<"NAME ="<<e1.name<<endl ;
	cout<<"SALARY ="<<e1.sal<<endl ;

	cout<<"ID ="<<e2.id<<endl ;
	cout<<"NAME ="<<e2.name<<endl ;
	cout<<"SALARY ="<<e2.sal<<endl ;

}
