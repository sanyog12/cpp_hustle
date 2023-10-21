#include <iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(int x, int y){
        real = x;
        img = y;
    }
    complex operator -(complex c){
        complex temp;
        temp.real = real-c.real;
        temp.img = img-c.img;
        return temp;
    }
    void display(){
        cout<<real<<" - "<<img<<"i"<<endl;
    }
};

int main()
{
 complex c1(10,20);
 complex c2(10,20);
 complex c3;
  complex c4;
 c3 = c1-c2;
 c4 = c1.operator-(c3);
 c3.display();
 c4.display();

    return 0;
}
