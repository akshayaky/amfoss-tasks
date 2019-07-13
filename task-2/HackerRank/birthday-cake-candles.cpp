#include<iostream>
using namespace std;

int birthdayCakeCandles(int arr[100],int n)
{
	int lar = INT_MIN,num = 0;
	for(int x=0;x<n;x++)
		if(arr[x]>lar)
			lar = arr[x];
	
	for(int x = 0;x<n;x++)
	{
		if(lar == arr[x])
			num+=1;
	}	
	return num;
}


int main()
{
	int n,arr[100];

	cin>>n;
	
	for(int x=0;x<n;x++)
	{
		cin>>arr[x];
	}
	
	cout<<birthdayCakeCandles(arr,n);
	
}