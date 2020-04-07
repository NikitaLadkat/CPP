#include<iostream>
#include<exception>

using namespace std ;

class MyException : public exception
{

	public :
	const char *what() const throw()
{
	return("Attemped to divide by zero ! ");
}

};

int main()
{

try 
{
int x, y ; 

cout<<"Enter any two "<<endl ;
cin>>x>>y;


