#include<iostream>
using namespace std;
class bankaccount{
	private:
		int balance;
		public:
			void setbalance(int b)
			{
				if (b>=0)
				balance=b;
			}
			int getbalance(){
				return balance;
			}
};
int main()
{
	
	bankaccount acc;
	int a;
	cout<<"Enter salary: ";
	cin>>a;
	acc.setbalance(a);
	cout<<"Balance: Rs"<<acc.getbalance();
}