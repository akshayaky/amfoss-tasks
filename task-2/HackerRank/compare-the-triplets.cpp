#include<iostream>
using namespace std;

int score[2];

void compareTriplets(int a[3],int b[3])
{
    score[0]= 0;
    score[1]= 0;
    
    for(int x=0;x<3;x++)
    {
        if(a[x]>b[x])
            score[0]+=1;
        else if(a[x]<b[x])
            score[1]+=1;
    }
    
    
}


int main()
{
    int a[3],b[3];

    for(int x=0;x<3;x++)
        cin>>a[x];
    
    for(int x=0;x<3;x++)
        cin>>b[x];
        
    compareTriplets(a,b);
    cout<<score[0]<<" "<<score[1];
        
}
