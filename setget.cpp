#include<iostream>
using namespace std ;
		

class customer
{
	private :
	int cust_id ;
	string name ;
	float balance ;
	
	public :
	void setCust_id(int id) ;
	int getCust_id();

	void setName(string cname);
	string getName();
	
	void setBalance(float bal);
	float getBalance();
};

void customer :: setCust_id(int id)
{
	cust_id = id ;
}

int customer :: getCust_id()
{
return cust_id ;
}

void customer :: setName(string cname)
{
	name = cname ;
}

string customer :: getName()
{
return name ;
}

void customer :: setBalance(float bal)
{
	balance = bal ;
}

float customer :: getBalance()
{
return balance ;
}



int main()
{
	string pwd ;
	customer c1 ;


	c1.setCust_id(1001) ;
	c1.setName("Name") ;
	c1.setBalance(253300.00);

	
	cout<<"Enter the Password : " ;
	cin>>pwd ;
	

	if (pwd=="admin123")
	{

		cout<<"ID = "<<c1.getCust_id()<<endl ;
		cout<<"NAME = "<<c1.getName()<<endl ;
		cout<<"BALANCE = "<<c1.getBalance()<<endl ;
	}

	else

	{
		cout<<"You an invalid user.." ;
	}

}
