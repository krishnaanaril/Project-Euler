/*
    Krishna Mohan
    Project Euler - Problem 1
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define foj(i, j, n) for(int (i)=(j);(i)<(n); (i)++)

bool isPalin(int num)
{
    char n[100];
    int i=0;
    while(num)
    {
        n[i++]=num%10;
        num/=10;
    }
    for(int j=0, k=i-1; j<k; j++, k--)
    {
        if(n[j]!=n[k])
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    long long ans=0;
    foj(i, 900, 1000)
    {
        foj(j, 900, 1000)
        {
            cout<<(i*j);
            if(isPalin((i*j)))
            { 
                cout<<" -> YES"<<endl;
                ans=(i*j);
            }
            else
                cout<<" -> NO"<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}
