/*calculate power of a number*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int power, base, exponent;
	
	cout<<"enter the base ="<<endl;
	cin>>base;
	cout<<"enter the exponent="<<endl;
	cin>>exponent;
	
	power=pow(base,exponent);
	
	cout<<"Power is ="<<power;
	
	
}
