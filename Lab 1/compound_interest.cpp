//calculate compound interest

#include<iostream>
#include<cmath>
using namespace std;



	float solve(int p, int t, float r, int n)
	{
	
		float fa;
		fa= p * pow((1+(r/(n*100))),(n*t));
		return fa-p;
	}
	

int main()
{
	int p = 10000;
	int t = 7;
	float r = 6.25;
	int n = 4;
	cout<<"compound interest for 10000 with ROI 6.25 for 7 years : ";
	float  result;
	result = solve (p, t, r, n);
	cout<<result<<endl;
	cout<<"Total amount is:  "<<p + result;
	return 0;
}
