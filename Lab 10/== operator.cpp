#include<iostream>
using namespace std;
class ComparionOperator
{
	private :
		int number;
	public :
		void setData()
		{
			cin>>number;
		}
		int operator ==(ComparionOperator x)
		{
			if(number==x.number)
			return 1;
			else
			return 0;
		}
};
int main()
{
	ComparionOperator num1,num2;
	cout<<"Please  enter 1st number num1"<<endl;
	num1.setData();
	cout<<" Please  enter 2nd number num2"<<endl;
	num2.setData();
	if(num1==num2)
	{
		cout<<"num1 is equal to num2. ";
	}
	else
	{
		cout<<"num1 is not not equal  to num2. ";
	}
 return 0;
 
}
