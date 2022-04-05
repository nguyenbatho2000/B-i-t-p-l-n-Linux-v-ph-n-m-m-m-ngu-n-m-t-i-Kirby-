#include <iostream>
using namespace std;

int main()
{
	string k;
	string B="ABCDEFGHIKLMNOPQRSTUVWXYZ";
	cout<<"Nhap chuoi khoa: ";getline(cin,k); 
	k=k+B;
	//xoa trung lap
	for(int i=0;i<k.size()-1;i++)
		for(int j=i+1;j<k.size();j++)		
			if(k[j]==k[i])  { k.erase(j,1);j--;	}
	cout<<"Chuoi vua xoa: "<<k<<endl;;
	
	char a[5][5];int t=0;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			{  a[i][j]=k[t];t++; }
	
	//hien thi ma tran khoa
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)  cout<<a[i][j]<<" ";
		cout<<endl;		
	}
}
