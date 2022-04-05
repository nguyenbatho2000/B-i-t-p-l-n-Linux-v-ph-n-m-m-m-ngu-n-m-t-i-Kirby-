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
	string p,c,K;
	cout<<"Nhap plaitext: ";cin>>p; c=p;
	cout<<"Nhap chuoi k=";cin>>K;
	//ma hoa
	int j=0;
	for(int i=0;i<p.size();i++)
	{
		
		int m; m=kt_so(p[i]);
		int k; k=kt_so(K[j]);
		
		m=(m+k)%26;
		c[i]=so_kt(m);
		j=j+1;
		if(j==K.size()) j=0;
	}
	cout<<"Chuoi ma hoa: "<<c;
	
	//giai ma
	j=0;
	for(int i=0;i<c.size();i++)
	{	
		int m; m=kt_so(c[i]);
		int k; k=kt_so(K[j]);	
		m=(m-k+26)%26;
		p[i]=so_kt(m);
		j=j+1;
		if(j==K.size()) j=0;
	}
	cout<<endl<<"Chuoi giai ma: "<<p;	

	
	
}
