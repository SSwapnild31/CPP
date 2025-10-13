#include<iostream>
using namespace std;

class Shape
{
	protected :
		float dimention;
	public :
		void getDimention()
		{
			cin>>dimention;
		}
		virtual float calculateArea()=0;
};

class Square : public Shape
{
	public :
		float calculateArea()
		{
			return dimention*dimention;
		}
};

class Circle : public Shape
{
	public :
		float calculateArea()
		{
			return 3.14*dimention*dimention;
		}
};

int main()
{
	Square s;
	Circle c;
	
	cout<<"Enter length of the square : ";
	s.getDimention();
	cout<<"Area of square : "<<s.calculateArea()<<endl;
	
	cout<<"\nEnter radious of the circle : ";
	c.getDimention();
	cout<<"Area of circle :  "<<c.calculateArea()<<endl;
}
