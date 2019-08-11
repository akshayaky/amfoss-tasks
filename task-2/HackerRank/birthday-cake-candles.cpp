#include <bits/stdc++.h> 
using namespace std;

int birthdayCakeCandles(int arr[100000],int n)
{
    int lar,num = 0;
    for(int x=0;x<n;x++)
    {
        if(x==0)
            lar = arr[x];
        if(arr[x]>lar)
            lar = arr[x];
    }
    
    for(int x = 0;x<n;x++)
    {
        if(lar == arr[x])
            num+=1;
    }    
    return num;
}


int main()
{
    int n,arr[100000];

    cin>>n;
    
    for(int x=0;x<n;x++)
    {
        cin>>arr[x];
    }
    
    cout<<birthdayCakeCandles(arr,n);
    
}
