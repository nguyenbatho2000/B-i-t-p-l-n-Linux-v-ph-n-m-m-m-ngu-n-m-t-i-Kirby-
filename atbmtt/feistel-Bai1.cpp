#include <iostream>
using namespace std;
char F(char R,char Ki) {return R+Ki;}
int main()
{
	string p,c,k,l,r;
	cout<<"Nhap khoi plaimtext: ";getline(cin,p);c=p;
	cout<<"Nhap khoa k: ";cin>>k[0];
	//ma hoa
	r[0]=p[0];
	l[0]=p[1];	
	for (int i=1;i<=2;i++)
	{
		k[i]=k[0]<<i;
		r[i]=l[i-1]^F(r[i-1],k[i]);
		l[i]=r[i-1];
	}
	c[0]=l[2];
	c[1]=r[2];
	cout<<"Khoi ma hoa: "<<c;
}
