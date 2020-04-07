#include<iostream>
using namespace std;
class Shape
{
public:
virtual void draw()=0;
};

class rectangle : Shape 
{
public:
void draw()
{
cout<<"Drawing rectangle"<<endl;
}
};

class Circle:Shape
{
public :
void draw()
{
cout<<"drawing circle.."<<endl ;
}
};


int main()
{

rectangle rec ;
Circle cir ;
rec.draw();
cir.draw();
return 0; 

}
