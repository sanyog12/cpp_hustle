#include <iostream>  
#include <fstream>  
using namespace std;  
int main ()
{  
  ofstream filestream("FileHandlingInfo.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Hello\n"; 
     filestream << "This file is including all file handling commands\n"; 
    filestream << "fstream :: It is used to create files, write information to files, and read information from files.\n";  
    filestream<<"ifstream :: It is used to read information from files.\n";
    filestream<<"ofstream :: It is used to create files and write information to the files.\n";
    filestream.close();  
  }  
  else cout <<"File doesn't exists.";  
  return 0;  
} 