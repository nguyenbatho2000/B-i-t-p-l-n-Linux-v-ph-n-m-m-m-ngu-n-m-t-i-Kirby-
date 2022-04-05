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
	string p,c;int k;
	cout<<"Nhap: ";getline(cin,p); c=p;
	cout<<"Nhap k=";cin>>k;
	//ma hoa
	for(int i=0;i<p.size();i++)
	{
		int m;m=kt_so(p[i]);
		m=(m+k)%26;
		c[i]=so_kt(m);
	}
	cout<<"Chuoi ma hoa: "<<c;
	
	//Giai ma
	for(int i=0;i<c.size();i++)
	{
		int m;m=kt_so(c[i]);
		m=(m-k+26)%26;
		p[i]=so_kt(m);
	}
	cout<<endl<<"Chuoi giai ma: "<<p;
	
	
}
