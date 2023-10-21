#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the value of num1 & num2 "<<endl;
	cin>>num1>>num2;
	try{
		if(num2!=0)
		{
			cout<<"num1/num2 = "<<num1/num2<<endl;
		}
		else
		{
			throw (0);
		}
		
		
	}
	catch(int x)
	{
		cout<<"Error: Division by Zero!";
	}

	return 0;
}
