// To understand the concept of function overloading

#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
class Calc{
	public:
	int l, b,h,r;
	int volume(int l)
	{
		return pow(l,2);
	}
	int volume(int l, int b, int h)
	{
		return l*b*h;
	}
	int volume(int r,int h)
	{
		return (PI*(pow(r,2))*h);
	}
	
};
int main()
{
	Calc cylinder;// declaring cylinder as an object 
	Calc cube;
	Calc cuboid;
	int l, b, h, r;
	cout<<"Enter length, breadth and height: "<<endl;
	cin>>l>>b>>h;
	cout<<"Enter radius: ";
	cin>>r;
	cout<<"The volume of cube is: "<<cube.volume(l)<<endl;
	cout<<"The volume of cuboid is: "<<cuboid.volume(l,b,h)<<endl;
	cout<<"The volume of cylinder is: "<<cylinder.volume(r,h);
	return 0;
}
