// C++ program to demonstrate syntax of switch


#include <iostream>
using namespace std;
  

int main()
{
  
    int var;
    cout<<"enter a value from 1 to 4="<<endl;
    cin>>var;
  
    // switch case 
    switch (var) 
    {
      case 1:
          printf("Case 1 is executed.\n");
          break;
          
      case 2:
          printf("Case 2 is executed.\n");
          break;
          
      case 3:
          printf("Case 3 is executed.\n");
          break;
      case 4:
          printf("Case 4 is executed.");
          break;
          

}
 return 0;

}
