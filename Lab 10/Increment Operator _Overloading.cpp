
#include <iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    
    Complex()
    {
        real,img=0;
    }
    Complex(int i, int j)
    {
        real = i;
        img = j ;
    }
    
    Complex operator ++()
    {
    Complex x = (*this);
     cout<<real<<" + "<<img<<"i"<<endl;
     
    this->real++;
     
    this->img++;
     cout<<real<<" + "<<img<<"i"<<endl;
    return x;
    }
    
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1(3,4);
    ++c1;
    c1.display();
    return 0;
}