#include<iostream>

using namespace std ;

class animal

{
public :
	void eat()
	{
		cout<<"Method 1"<<endl ;
	}

};
class dog : public animal
{
	public:
		void bark()
		{
			cout<<"method 2"<<endl;
		}

};
class cat : public dog
{
	public:
		void meow()
		{
			cout<<"method 3"<<endl;
		}
};

class babycat : public cat
{
	public:
		void cry()
		{
			cout<<"method 4"<<endl;
		}
};


int main(void)
{

babycat b1 ;
b1.bark();
b1.eat();
b1.cry();
b1.meow();

return 0 ;

}
