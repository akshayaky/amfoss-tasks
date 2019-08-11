
//The program runs correctly for 5/6 inputs and terminates due to timeout in one of the inputs.

#include<iostream>
#include<math.h>
using namespace std;


int primeorNot(int num) //Checks whether a given number is a prime or not.
{
    
    for(int x=2;x<num;x++)
    {
        if(num%x==0)
            {
                return 0;
            }
    }
        return 1;    
}

int main()
{
    int t;
    long long n;
    cin>>t;
    int lar[10];
    for(int x=0;x<t;x++) //loop to iterate over all the testcases
    {
        cin>>n;
        if(primeorNot(n))
        {
            lar[x]=n;
            continue;
        }
        
        lar[x] = 2;
        for(int y=2;y<=n;y++) 
        {
            if(n%y==0)
            {
                if(primeorNot(y))
                {
                    if(lar[x]<y)
                        {lar[x]=y;
                        n = n/y;
                        }
                        
                }    
            }
        }
        
    }
    for(int x=0;x<t;x++)
    {
        cout<<lar[x]<<endl;
    }
    
}
