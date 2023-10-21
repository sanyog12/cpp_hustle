#include <iostream> 
#include <exception> 
using namespace std; 
 
class myexception: public exception 
{ 
  virtual const char* what() const throw() 
  { 
    return "Custom exception class"<<endl; 
  } 
}; 
 
int main () 
{ 
  myexception ex; 
  try 
  { 
    throw ex; 
  } 
  catch (exception& except) 
  { 
    cout << except.what() << endl; 
  } 
  return 0; 
}
