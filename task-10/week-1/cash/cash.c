#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float dollars;
    int change[] = {25,10,5,1};
    do
    {
        dollars = get_float("Change owed: ");
    }
    while(dollars<=0);
    dollars*=100;
    int cents = round(dollars);
    int no_of_coins=0,x=0;
    while(cents != 0)
    {
        if(cents<change[x])
        {
            x++;
        }
        else
        {
            cents -= change[x];
            no_of_coins++;
        }

    }
    printf("%i\n",no_of_coins);
    
}
