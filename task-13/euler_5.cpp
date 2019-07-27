#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	long long num[10];
	for(int x=0;x<t;x++)
	{
		num[x]=0;
		cin>>n;
		for(int y=1;y>0;y++)
		{
			for(int i=1;i<=n;i++)
			{
				if(y%i!=0)
					break;
				if(i == n)
					num[x] = y;
			}
			if(num[x] != 0)
		 		break;
		}
		
	}
	for(int x=0;x<t;x++)
	{
		cout<<num[x]<<endl;
	}
	
}