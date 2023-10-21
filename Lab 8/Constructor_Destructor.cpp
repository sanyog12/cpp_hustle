#include<iostream>
using namespace std;

class A
{
	int x,y;
	public:
	A()
	{
		x=y=0;
		cout<<"Defaulat Constructor of A is called"<<endl;
	}
	A(int a, int b)
	{
		cout<<"Parametrized Constructor of A is called"<<endl;
		x=a;
		y=b;
	}
	
	void getData()
	{
		cout<<"Value of X is"<<x<<"Value of Y is"<<y<<endl;
	}

		
	~A()
	{
		cout<<"Destructor of A is called";
	}
	
};

int main()
{
	A aobj;
	aobj.getData();
	A aobj1(10,20);
	aobj1.getData();
}

