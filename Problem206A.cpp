#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(ll num)
{
    int n[100], i=0;
    while(num)
    {
        n[i++]=num%10;
        num/=10;
    }    
    if(n[0]==0 && n[2]==9 && n[4]==8 && n[6]==7 && n[8]==6 && n[10]==5 && n[12]==4 && n[14]==3 && n[16]==2 && n[18]==1)
        return true;
    return false;
}

int main()
{
    long long ans=sqrt(1020304050607080900);
    cout<<ans<<endl;
    long long ans2=sqrt(1929394959697989990);
    cout<<ans2<<endl;
    ll c=70;
    for(ll i=ans+20; i<=ans2;i+=c)
    {
        c=(c==40)?60:40;
        cout<<i<<endl;
        if(check(i*i))
        {
            cout<<i<<"->"<<(i*i)<<endl;
            break;
        }
    }
    return 0;
}
