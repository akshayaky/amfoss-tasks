#include<iostream>
using namespace std;


struct p{
	int arr[2];
};
struct p compareTriplets(int a[3],int b[3])
{
	p score;
	score.arr[0]= 0;
	score.arr[1]= 0;
	
	for(int x=0;x<3;x++)
	{
		if(a[x]>b[x])
			score.arr[0]+=1;
		else if(a[x]<b[x])
			score.arr[1]+=1;
	}
	return score;
	
}


int main()
{
	int a[3],b[3];

	for(int x=0;x<3;x++)
		cin>>a[x];
	
	for(int x=0;x<3;x++)
		cin>>b[x];
		
	p result;
	result = compareTriplets(a,b);
	cout<<result.arr[0]<<" "<<result.arr[1];
		
}
