/*
    Krishna Mohan
    Project Euler - Problem 14
    Date: 3/17/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000001

long long ans[MAX], maxv=0, maxi=0;

int main()
{
    ios_base::sync_with_stdio(0);
    fill(ans, ans+MAX, 1);
    /*for(int i=1;i<14;i++)
        cout<<i<<" -> "<<ans[i]<<endl;*/
    for(int i=2;i<MAX;i++)
    {
        cout<<i<<endl;
        long long num=i;
        while(num!=1)
        {
            //cout<<num<<" -> ";
            if(num&1)
                num=3*num+1;
            else
                num/=2;
            if(num<i)
            {
                ans[i]+=ans[num];
                break;
            }
            else
            {
                ans[i]++;
            }
        }
        if(ans[i]>maxv)
        {
            maxv=ans[i];
            maxi=i;
        }
    }
    for(int i=1;i<50;i++)
        cout<<i<<" -> "<<ans[i]<<endl;
    cout<<"max "<<maxi<<endl;
    return 0;
}
