#include<iostream>
using namespace std;

class Calculation
{
		public:
	Calculation()
	{
		cout<<"Deafault of Outerclass Calculation"<<endl;
	}

	class Sum
	{
		int x,y;
		public:
		Sum()
		{
			cout<<"Deafault inner class Sum"<<endl;
			x=y=0;
		}
		Sum(int a, int b)
		{
			x=a;
			y=b;
		}
		void getData()
		{
			int z;
			z = x+y;
			cout<<"Sum of no is  "<<z<<endl;
		
		}
	};
};

int main()
{
	Calculation::Sum obj1;
	obj1.getData();
	Calculation::Sum obj2(10,20);
	obj2.getData();
	
}
