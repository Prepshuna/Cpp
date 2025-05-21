#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
		void introduce()
		{
			cout<<" Hello. I'm "<<name<<" and I'm "<<age<<"years old";
		}
};
int main()
{
	student s1;
	s1.name ="Alaska";
	s1.age= 19;
	s1.introduce();
}