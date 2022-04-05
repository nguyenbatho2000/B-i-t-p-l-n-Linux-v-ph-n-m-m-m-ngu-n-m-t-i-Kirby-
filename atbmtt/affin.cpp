#include <iostream>
using namespace std;

int kt_so(char c)
{
	return c-'A';
}
char so_kt(int n)
{
	return n+'A';
}
int main()
{
	string p,c;int a=0,b;
	cout<<"Nhap: ";getline(cin,p); c=p;
	
	//ma hoa
	
	while (a<1 || a>25 || a%2==0 || a==13)
	{
		cout<<"Nhap a=";cin>>a;
	}
	cout<<"Nhap b=";cin>>b;
	for(int i=0;i<p.size();i++)
	{
		int m;m=kt_so(p[i]);
		m=(a*m+b)%26;
		c[i]=so_kt(m);
	}
	cout<<"Chuoi ma hoa: "<<c;
}
