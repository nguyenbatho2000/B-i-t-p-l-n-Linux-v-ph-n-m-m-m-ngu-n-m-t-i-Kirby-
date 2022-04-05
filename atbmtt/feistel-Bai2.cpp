#include <iostream>
using namespace std;
char F(char R,char Ki) {return R+Ki;}
string MH(char p0,char p1,char K)
{
	string k,l,r;
	string c="  ";
	//ma hoa
	r[0]=p0;
	l[0]=p1;
	k[0]=K;	
	for (int i=1;i<=2;i++)
	{
		k[i]=k[0]<<i;
		r[i]=l[i-1]^F(r[i-1],k[i]);
		l[i]=r[i-1];
	}
	c[0]=l[2];
	c[1]=r[2];
	return c;
}
int main()
{
	string p,c;char k;
	cout<<"Nhap khoi plaimtext: ";getline(cin,p);
	cout<<"Nhap khoa k: ";cin>>k;
	if (p.size()%2==1)  p=p+'X';
	for (int i=0;i<p.size();i=i+2)  c=c+MH(p[i],p[i+1],k);
	cout<<"Chuoi ma hoa: "<<c;
}
