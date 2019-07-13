#include<iostream>
using namespace std;

int  main()
{
	char str[100];
	cin.getline(str,100);
	int len=0,curr=str[0];
	for(int x=0;x<strlen(str);x++)
	{
	
		if(str[x]==curr)
			len++;
		else
		{
			curr=str[x];
			len = 1;
					
		}
		if(len==7)
			break;
	}
	if(len==7)
		cout<<"YES";
	else
		cout<<"NO";
}