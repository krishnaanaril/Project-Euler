#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

void DivideByGCD(ll &a,ll &b)
{
    ll g=gcd(a, b);
    a/=g;
    b/=g;
}

ll nCr(ll n, ll r)
{
    r=min(r, n-r);
    ll toMul, toDiv, num=1, den=1;
    for(int i=r;i>0;i--    )
    {
        toMul=n-r+i;
        toDiv=i;
        DivideByGCD(toMul, toDiv);
        DivideByGCD(num, toDiv);
        DivideByGCD(toMul, den);
        num*=toMul;
        den*=toDiv;
    }
    return num/den;
}

int main()
{
    cout<<nCr(40, 20)<<endl;
    return 0;
}
