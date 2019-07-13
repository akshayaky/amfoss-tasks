#include <iostream>

using namespace std;

void staircase(int n) {
    int a = n-1;
    for(int x=0;x<n;x++)
    {
        for(int y=0;y<n;y++)
        {
            if(y<a)
                cout<<" ";
            else 
                cout<<"#";
        }  
        cout<<endl;
        a--;  
                    
    }

}

int main()
{
    int n;
    cin >> n;
    staircase(n);

    return 0;
}