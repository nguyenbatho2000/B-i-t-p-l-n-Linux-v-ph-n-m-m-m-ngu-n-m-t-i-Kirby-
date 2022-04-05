#include <iostream>
using namespace std;


int main()
{
	string s;
	cout<<"Nhap: ";getline(cin,s);
	
	//ma hoa
	for(int i=0;i<s.size();i++)
	{
		s[i]=s[i]+3;
	}
	cout<<"Chuoi ma hoa: "<<s;
	//Giai ma
	for(int i=0;i<s.size();i++)
	{
		s[i]=s[i]-3;
	}
	cout<<endl<<"Chuoi giai ma: "<<s;
	
	
}
