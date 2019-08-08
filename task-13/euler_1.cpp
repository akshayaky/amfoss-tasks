
//The program gives correct output for 4/6 inputs

#include<iostream>
using namespace std;


int last_term(int a,int n)
    {
        int l = n - 1;
    while (l>0)
    {
        if(l%a == 0)
         {
                return l;
            break;
         }
        l -= 1;
    }    
    return (-a);
    }

int no_of_terms(int a,int l,int d)
    {
        return ((l - a)/d +1);
    }

int ap(int a,int n,int l)
    {
        return ((n * (a + l))/2);
    }

int main()
{
     long long t;
     long long int n;
     long long  n_3,n_5,n_15;
    cin>>t;
     long long sum[100000];
    for(int x=0;x<t;x++)
    {
         sum[x] = 0;
         cin>>n;
         n_3 = no_of_terms(3,last_term(3,n),3);
         n_5 = no_of_terms(5,last_term(5,n),5);
         n_15 = no_of_terms(15,last_term(15,n),15);
         sum[x] += ap(3,n_3,last_term(3,n)) + ap(5,n_5,last_term(5,n)) - ap(15,n_15,last_term(15,n)); 
    
    }
    for(int x=0;x<t;x++)
    {
        cout<<sum[x]<<endl;
    }
    
}
