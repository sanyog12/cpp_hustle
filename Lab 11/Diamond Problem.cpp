#include<iostream>
using namespace std;
class Employee
{
	int id =0;
	
	public:
		public:	
		void display()
		  {
		  	cout<<"Id :: "<<id<<endl;
			cout<<" It is a employee"<<endl;
	      }
};
class PermanentEmp : virtual public Employee
{
		int id=101;
	public:
		void display()
		{ 
		    cout<<"Id :: "<<id<<endl;
		 	cout<<"It is a PermanentEmp"<<endl;
		}
};
class ContractEmp : virtual public Employee
{
		int id=201;
	public:
		void display()
		{ 
		    cout<<"Id :: "<<id<<endl;
		 	cout<<"It is a ContractEmp"<<endl;
		}
};
class AppernticeEmp : public PermanentEmp,public ContractEmp
{
		int id=301;
	public:
		void display()
		{ 
		    cout<<"Id :: "<<id<<endl;
		 	cout<<" It is a AppernticeEmp"<<endl;
		}
};

int main()
{
	AppernticeEmp A1;
	A1.display();
}
