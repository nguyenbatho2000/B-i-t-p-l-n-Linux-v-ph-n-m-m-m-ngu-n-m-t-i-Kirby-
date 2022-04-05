#include <iostream>   //be khoa caser
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
	string p,c;
	cout<<"Nhap: ";getline(cin,p); c=p;
	
	
	for(int k=1;k<=25;k++)
	{
	
	//Giai ma
		for(int i=0;i<c.size();i++)
		{
			int m;m=kt_so(c[i]);
			m=(m-k+26)%26;
			p[i]=so_kt(m);
		}
		cout<<endl<<"Chuoi giai ma: "<<p;
	}
	
}
