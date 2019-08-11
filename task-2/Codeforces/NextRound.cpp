#include<iostream>
using namespace std;


int main()
{
	int n,k,num = 0,arr[50];
	cin>>n>>k;
	for(int x=0;x<n;x++)
	{
		cin>>arr[x];
	}
	for(int x=0;x<n;x++)
	{
		if(arr[x]>=arr[k-1] && arr[x]>0)
			num++;
		else
			break;
	}
	cout<<num;
}
