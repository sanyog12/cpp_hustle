#include <iostream>     
using  namespace std;  
#include<string.h>
#include<iomanip>
class date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"Enter date\n";
			cin>>dd>>mm>>yy;
		}
		void put()
		{
			cout<<"\t\tDate of Birth: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class student
{
	int rollno;
	int m1,m2,m3,m4,m5;
	char name[100];
	float avg;
	date d;
	
	public:
		void get()
		{
			cout<<"Enter rollno"<<endl;
			cin>>rollno;
			cout<<"Enter student name"<<endl;
			cin>>name;
			cout<<"Enter the marks of five subject "<<endl;
			cin>>m1>>m2>>m3>>m4>>m5;
			avg_calc();
			d.get();
			
		}
	
		
		void put()
		{
			cout<<rollno<<"\t\t"<<name<<"\t\t"<<setprecision(6)<<avg<<endl;
			cout<<endl;
			d.put();
		
		}
		void avg_calc()
		{
			avg=(float)(m1+m2+m3+m4+m5)/5;
		}
		int getrollno()
		{
			return rollno;
		}
		char* getname()
		{
			return name;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void setname(char* n)
		{
			strcpy(name,n);
		}
		
		
};
int main()
{

	int i,n,j;
	cout<<"Enter no. of student\n";
	cin>>n;
	student s[n],temp;
	
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	cout << setfill ('=') << setw (241);
	cout<<"\n";  
	cout<<"Before sorting data"<<endl;
	cout<<endl;
	cout<<"Roll No\t"<<"\tName\t"<<"Average of mark"<<endl;
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
	cout<<endl;
	cout<<endl;
	cout << setfill ('=') << setw (241);
	cout<<"\n";  
	cout<<"After sort information\n";
		cout<<endl;

	cout<<"Roll No\t"<<"\tName\t"<<"Average of mark"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}

