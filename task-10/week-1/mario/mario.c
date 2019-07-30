#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n =  get_int(" ");
    }
    while(n<1 || n>8);
    
    int a=n-1;
    int b=n+2;
        
    for(int x = 0;x<n;x++)
    {
        for(int y=0;y<(2*n+2);y++)
        {
            if(y==n || y==n+1 )
            {
                printf(" ");
                continue;
            }
             else if(y<a )
            {
                printf(" ");
            }
            else if( y>b )
            {
                break;
            }
            
            else
            {
                printf("#");
            }
        }
        printf("\n");
        a--;
        b++;
    }
}
