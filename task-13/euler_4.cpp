#include<iostream>
using namespace std;

//checks if a number is a pallindrome.
int pallindrome(int n)
{
	int temp = n,k = 0;
	while(temp>0)
	{
		k *=10;
		k += (temp%10);
		temp /= 10;
		
	}
	if(n == k)
		return 1;
	else
		return 0;
}

int main()
{
	int t;
	long n;
	cin>>t;
	int lar_pal[100];
	for(int x=0;x<t;x++)
	{
		lar_pal[x] = 0;
		cin>>n;
		for(int y=n-1;y>1;y--)
		{
			if(pallindrome(y))
			{
					for(int i=999;i>=100;i-- )
					{
						for(int j=999;j>=100;j--)
						{
							if(i*j == y)
							{
								lar_pal[x] = y;
								break;
							}
							
									
						}
						if(lar_pal[x]!=0)
							break;
					}		
			}
		}
		
	}
	for(int x=0;x<t;x++)
	{
		cout<<lar_pal[x]<<endl;
	}
	
}