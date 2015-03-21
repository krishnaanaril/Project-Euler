/*
    Krishna Mohan
    Project Euler - Problem 9
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)

int main()
{
    ios_base::sync_with_stdio(0);
    int c, f=0;
    long long ans=0;
    for(int a=1;a<1000;a++)
    {
        for(int b=1;b<1000;b++)
        {
            c=1000-(a+b);
            if(pow(c, 2)==(pow(a, 2)+pow(b, 2))) 
            {
                cout<<a<<" : "<<b<<" : "<<c<<endl; 
                cout<<pow(a, 2)<<" : "<<pow(b, 2)<<" : "<<pow(c, 2)<<endl;
                ans=(a*b*c);
                f=1;
                break;
            } 
        }
        if(f)
            break;
    }
    cout<<ans<<endl;
    return 0;
}
