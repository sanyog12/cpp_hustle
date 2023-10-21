/*Declare members and implement in your programs*/

#include<iostream>
using namespace std;
 
 
class addition
{
	int num1=1,num2=2,sum;
	
	public:
		
	void add()
	{
		sum=num1+num2;
		cout<<"sum is="<<sum;
	}
			
};


int main()
{
	addition a1;
	cout<<"addition of 1 and 2=";
	a1.add();
	
}
