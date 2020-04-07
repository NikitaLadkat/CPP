#include<iostream>
using namespace std;

class A 
{

public:
	animal()
	{
		cout<<"Nikita"<<endl;
	}
}


class B : public A
{

public:
	animal()
	{
		cout<<"Sne"<<endl;
	
	}
}


class C : public A, public B 

{
	public:
		animal()
	{
		cout<<"anu"<<endl;
	
	}
}



int main(void)

{
C c ;

c.animal();
return 0;
}
