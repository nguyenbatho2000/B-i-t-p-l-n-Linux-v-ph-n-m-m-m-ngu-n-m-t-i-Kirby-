#include <iostream>    // tan suat xuat hien chu cai
using namespace std;

int main()
{
	string p,c;
	
	cout<<"Nhap Plaintext: ";cin>>p; c=p;
	
	//ma hoa
	string s="";
	for(int i=0;i<p.size();i++)
	{		
		int f=0;
		int k=0;		
		for(int z=0;z<s.size();z++)
		{			
			if(p[i]==s[z])	k++;										
		}
		if (k==0)
		{
			for(int j=0;j<p.size();j++)
			{
				if (p[i]==p[j])  f=f+1;
			}
			cout<<endl<<p[i]<<":"<<f;
			s=s+p[i];
		}
		
		
	}
	
	//Giai ma
	
	for(int i=0;i<c.size();i++)
	{

	}
	//cout<<endl<<"Chuoi giai ma: "<<p;
	
	
}
