#include<iostream>
using namespace std;
class Date
{
      int day;
      int month;
      int year;
      public:
             Date(int dd,int mm,int yy)
             {
                   day = dd;
                   month = mm;
                   year = yy;
             }
             
             friend void operator-(Date &,int);
             friend void operator+(Date &,int);
             void display()
             {
             	cout<<"Date is::  ";
                  cout<<day<<"-"<<month<<"-"<<year<<endl;
             }
};
void operator-(Date &x, int y)
{
     x.day= x.day-2;
    x.month=x.month-1;
x.year=x.year-3;
cout<<"Substract operator overloading"<<endl;
 cout<<"Date::"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
}
void  operator+(Date &x,int y)
{
     x.day= x.day+4;
    x.month=x.month+1;
x.year=x.year+3;
cout<<"Add operator overloading"<<endl;
 cout<<"Date::"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
}
int main()
{
    int dd,mm,yy;
    cout<<"Enter the day:";
    cin>>dd;
    cout<<"Enter the month:";
    cin>>mm;
    cout<<"Enter the year:";
    cin>>yy;
    
 
 	Date d2(dd,mm,yy);
    	d2-2;
 	d2+4;
 	Date d(12,06,2023);
	d.display();
    return 0;
}
