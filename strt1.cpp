#include<iostream>
using namespace std;


class emp
{
	public:
	void displaydate()
	{
		int id = 222 ;
		string name = "Dance" ;
		cout<<"ID = "<<id<<endl;
		cout<<"NAME = "<<name<<endl ;
	}
		
	void display();
		
};
	
void emp :: display() 
{
		int id = 111 ;
		string name = "Nikita" ;
		cout<<"ID = "<<id<<endl ;
		cout<<"NAME = "<<name<<endl ;

}

int main()
{

	emp e1 ;
	e1.display();
	e1.displaydate();
}	
