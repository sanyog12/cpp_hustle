#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
    cout<<"The arguments are:\n " << argc;
 
    for (int i = 0; i < argc; i++) {
        cout<<" "<< argv[i]<<endl;
        cout<<argc;
    }
    return 0;
}
