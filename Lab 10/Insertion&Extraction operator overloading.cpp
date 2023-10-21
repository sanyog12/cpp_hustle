#include <iostream>
using namespace std;
 
class Complex
{
    int real, img;
public:
	Complex()
	{
		real=img=0;
	}
    Complex(int r , int i )
    {  
    
    real = r;   img = i;
    }
    
    friend void operator << (ostream &out, const Complex &c); 
    friend void operator >> (istream &in,  Complex &c);
};
 
void operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out  <<"+"<< c.img <<"i"<< endl;
   
}
 
void operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real : ";
    in >> c.real;
    
    cout << "Enter Imaginary : ";
    in >> c.img;
    
}
 
int main()
{
   Complex c;
   cin >> c;
   cout << "The complex number is ::";
   cout << c;
   return 0;
}

