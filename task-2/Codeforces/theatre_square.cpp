#include<iostream>
using namespace std;
long long flagstones = 0;
 
void area(int m,int n,int a)
{
	long long x = 0,y = 0;
	while(m>0)
	{
		m -= a;
		x++;
		
	}
	
	while(n >0)
	{
		n -= a;
		y++;
	}
	cout<<x*y;
	
}
 
int main()
{
	int m,n,a;
	cin>>m>>n>>a;
 	area(m,n,a);
	
}