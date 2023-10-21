//passing pointer to function


#include <iostream>
using namespace std;
 
void fun(int* ptr) 
{ 

*ptr = 5; 

}
 
int main()
{
    int x = 9;
    cout << "value of x before calling fun: " << x << endl;
    
    fun(&x);
 
    cout << "value of x after calling fun: " << x << endl;
    return 0;
}
