/*
    Krishna Mohan
    Project Euler - Problem 30
    Date: 3/22/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define LIM 355000 // found in net :P

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    ll ans=0;
    for(int i=2;i<=LIM;i++)
    {
        int num=i;
        ll tsum=0;
        while(num)
        {
            tsum+=pow(num%10, 5);
            /*if(i==9474)
                cout<<tsum<<endl;*/
            if(tsum>i)
                break;
            num/=10;
        }
        if(tsum==i)
            ans+=tsum;
    }
    cout<<ans<<endl;
    return 0;
}
