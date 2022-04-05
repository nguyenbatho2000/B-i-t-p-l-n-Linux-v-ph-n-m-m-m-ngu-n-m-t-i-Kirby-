#include <iostream>
using namespace std;

int main()
{
	string c; char a[8][4];
	string p="tranductung";
	
	//ma hoa
	int t=0;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<4;j++)
		{
			a[i][j]=p[t]; t++;
			if (t==p.size())	t=0;
			cout<<a[j][i]<<" ";
		}
		cout<<endl;	
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			c=c+a[j][i];		
	}
			 
	cout<<"Chuoi ma hoa: "<<c;
	
	//giai ma
	t=0; p="";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			a[j][i]=c[t]; t++;
					
			cout<<a[i][j]<<" ";
		}
		cout<<endl;	
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			p=p+a[i][j];		
	}
			 
	cout<<"Chuoi giai ma: "<<p;
	
	
	
	
	
}
