/*
    Krishna Mohan
    Project Euler - Problem 45
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 100000001

typedef unsigned long long ull; 

int main()
{
    ios_base::sync_with_stdio(0);
    /*
        As all tri are hex, we need to check pent and hex only
    */
    ull hv=0, pv=0, h=2, p=2, cnt=0;
    while(true)
    {
        hv=h*((2*h)-1);
        while(pv<hv)
        {
            pv=(p*((3*p)-1))/2;
            p++;
        }
        if(pv==hv)
        {
            cout<<pv<<" -> "<<(p-1)<<" : "<<h<<endl;
            cnt++;
        }    
        if(cnt==2)
            break;
        h++;
    }
    return 0;
}
