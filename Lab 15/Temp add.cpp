#include<iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
	T sum = a+b;
	return sum;
}

int main()
{
	//cout<<add<double>(22.5,55);
	cout<<add(22,55);
}
