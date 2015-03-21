/*
    Krishna Mohan
    Project Euler - Problem 5
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)

int main()
{
    ios_base::sync_with_stdio(0);
    long ans=1;
    int i=11;
    bool isdiv;
    while(true)
    {
        isdiv=true;
        for(int j=1;j<=20;j++)
        {
            if(i%j!=0)
            {
                isdiv=false;
                break;
            }
        }
        if(isdiv)
        {
            cout<<i<<endl;
            break;
        }
        i++;
    }    
    return 0;
}
