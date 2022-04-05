#include <iostream>    // zig zag Rain-fence
using namespace std;

int main()
{
	string p,c;
	cout<<"Nhap: ";getline(cin,p); c=p;
	
	//ma hoa
	string h1,h2;
	for(int i=0;i<p.size();i++)
	{
		if (i%2==0)  h1=h1+p[i];
		else  h2=h2+p[i];
	}
	c=h1+h2;
	cout<<"Chuoi ma hoa: "<<c;
	
	//Giai ma
	p="",h1="",h2="";
	if(c.size()%2==0)
	{
		for (int i=0;i<c.size();i++)
		{
			if(i<c.size()/2) h1=h1+c[i];
			else  h2=h2+c[i];
		}
		for(int i=0;i<c.size()/2;i++) p=p+h1[i]+h2[i];
	}
	else
	{
		for (int i=0;i<c.size();i++)
		{
			if(i<=c.size()/2) h1=h1+c[i];
			else  h2=h2+c[i];
		}
		for(int i=0;i<c.size()/2+1;i++) p=p+h1[i]+h2[i];
	}
	cout<<endl<<h1<<"  "<<h2<<"Chuoi giai ma :"<<p;
	
	
	
}
