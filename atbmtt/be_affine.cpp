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

	
	//Giai ma
	int a1;
	for (a=1 ;a<=25; a=a+2)
	{
		if(a!=13)
		{
		
			for (b=1 ;b<=25; b++)
			{	
				for(int i=1;i<=25;i++)
				{	
					if( (i*a)%26 == 1) 
					{
						a1=i;
						break;
					}
				}
				for(int i=0;i<c.size();i++)
				{
					int m;m=kt_so(c[i]);
					m=a1*(m-b+26)%26;
					p[i]=so_kt(m);
				}
				cout<<endl<<a<<" "<<b<<"  " <<p;
			}
		}
	}
	
}
