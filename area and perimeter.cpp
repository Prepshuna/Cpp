// To find area and perimeter of a rectangle using class, object and method

#include<iostream>
using namespace std;
class Calc{
	public:
	int l,b;
	int area(int l,int b)
	{
		return l*b;
	}
	int perimeter(int l,int b)
	{
		return (2*(l+b));
	}
};
int main()
{
	Calc rectangle;
	int l, b;
	cout<<"Enter length and breadth: ";
	cin>>l>>b;
	cout<<"Area of rectangle is: "<<rectangle.area(l,b)<<endl;
	cout<<"Perimeter of rectangle is: "<<rectangle.perimeter(l,b);
	return 0;
}
