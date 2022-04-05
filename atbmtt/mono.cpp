#include <iostream>    // mat ma monoAiphabetic
using namespace std;

int main()
{
	string p,c;
	string b="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"Nhap Plaintext: ";cin>>p; c=p;
	string k="NGUYENBATHO";
	
	//ma hoa
	for(int i=0;i<p.size();i++)
	{
		for(int j=0;j<26;j++)
		{
			if (p[i]==b[j])  c[i]=k[j];
		}
	}
	cout<<"Chuoi ma hoa: "<<c;
	//Giai ma
	
	for(int i=0;i<c.size();i++)
	{
		for(int j=0;j<26;j++)
		{
			if (c[i]==k[j])  p[i]=b[j];
			
		}
		
	}
	cout<<endl<<"Chuoi giai ma: "<<p;
	
	
}
