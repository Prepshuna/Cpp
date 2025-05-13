// to find the area and circumference of a circle

#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;
int main()
{
	float r, a,c;
	cout<<"Enter radius of circle :";
	cin>>r;
	a=pi*pow(2,r);
	c=2*pi*4*r;
	cout<<"\n Area of circle = "<<a<<endl;
	cout<<"\n Circumference of circle ="<<c;
	return 0;
}
