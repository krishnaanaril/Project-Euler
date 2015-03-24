/*
    Krishna Mohan
    Project Euler - Problem 29
    Date: 3/22/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MOD 1000000007
#define LIM 100

typedef long long ll;

ll bigMod(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1)
            res=(a*res);
        a=(a*a);
        b/=2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    set<double> dat;
    for(int i=2;i<=LIM;i++)
    {
        for(int j=2;j<=LIM;j++)
        {
            //cout<<i<<" : "<<j<<" = "<<bigMod(i,j)<<endl;
            //cout<<(j*log(i))<<endl;
            dat.insert(j*log(i));
        }
        //cout<<endl;
    }
    int ans=dat.size();
    cout<<"Ans: "<<ans<<endl;
    return 0;
}
