#include <iostream>
using namespace std;

int main()
{
	string p,c,K;
	cout<<"Nhap: ";getline(cin,p); c=p;
	cout<<"Nhap khoa k=";getline(cin,K);
	//ma hoa
	int j=0;
	for(int i=0;i<p.size();i++)
	{
		c[i]=p[i]^K[j];
		j++;
		if (j==K.size()) j=0;
	}
	cout<<"Chuoi ma hoa: "<<c;
	
	//Giai ma
	
	j=0;
	for(int i=0;i<c.size();i++)
	{
		p[i]=c[i]^K[j];
		j++;
		if (j==K.size()) j=0;
	}
	cout<<"Chuoi giai ma: "<<p;
	
	
}
