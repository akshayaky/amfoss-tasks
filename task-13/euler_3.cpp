
//The program runs correctly for 5/6 inputs and terminates due to timeout in one of the inputs.

#include<iostream>
#include<math.h>
using namespace std;


int primeorNot(int num)
{
    
    for(int x=2;x<sqrt(num)+1;x++)
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
    long long lar[10];
    for(int x=0;x<t;x++)
    {
        cin>>n;
        if(primeorNot(n))
        {
            lar[x]=n;
            
        }
        else
        {
            lar[x] = 2;
            for(int y=3;y<=n;y +=2)
        {
            if(n%y==0)
            {
                if(primeorNot(y))
                {
                    if(lar[x]<y)
                    {
                        lar[x]=y;
                        
                    }
                    
                        
                }
                n=n/y; //reduces the number of loop executions
                 
            }
            
        }
        }
        
    }
    for(int x=0;x<t;x++)
    {
        cout<<lar[x]<<endl;
    }
}

    
}

