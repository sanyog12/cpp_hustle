#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{
	int temp, sum = 0;
    vector<int> v;
    cout<<"Enter 5 element"<<endl;
    for(int i=0; i<5; i++)
	{
		cin >> temp;
		v.push_back(temp); 
	}  
    for(int i=0;i<v.size();i++)
	{
		cout<< v[i] << "  ";
		sum = sum + v[i];
	}
	cout<<endl;
	cout << "Addition is :: " << sum << endl; 
	v.pop_back();

    if(!v.empty())
    	cout << "Vector not empty " << endl;
    else
    	cout << "Vector Empty" << endl;
	return 0;
}  
