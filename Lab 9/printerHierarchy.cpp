#include<iostream>
using namespace std;

class A
{
	public:
	A()
	{
	
		cout<<"Defaulat Constructor of A is called"<<endl;
	}
	
	

	~A()
	{
		cout<<"Destructor of A is called"<<endl;
	}
	
};
class B: public A
{
	public:
	B()
	{
		
		cout<<"Defaulat Constructor of B is called"<<endl;
	}
	
	

	~B()
	{
		cout<<"Destructor of B is called"<<endl;
	}
	
};
class C: public A
{
	public:
	C()
	{
	
		cout<<"Default Constructor of C is called"<<endl;
	}
	
	

	~C()
	{
		cout<<"Destructor of C is called"<<endl;
	}
	
};
int main()
{
	A aobj;
	B bobj;
	C cobj;
}

