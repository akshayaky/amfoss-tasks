#include<iostream>
using namespace std;


int diagonalDifference(int arr[][100],int n)
{
	int diff;
	int leftSum = 0,rightSum = 0;
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(x == y)
				leftSum += arr[x][y];
				
		 	if(y == n-x-1)
				rightSum += arr[x][y];

		}
	}
	diff = abs(leftSum - rightSum);
	return diff;
}

int main()
{
	int n,arr[100][100];
	cin>>n;
	
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			cin>>arr[x][y];
		}
	}

	cout<<diagonalDifference(arr,n);
}