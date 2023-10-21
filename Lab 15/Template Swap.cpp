#include<iostream>
using namespace std;

template <class T>

T swap_1(T& a, T& b)
{
	T temp;
	temp = a;
	 a = b;
	 b = temp;
	 
}

int main()
{
	int a = 10;
	int b = 20;
	
swap_1(a,b);
cout<<a<<" "<<b;
}
