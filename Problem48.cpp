/*
    Krishna Mohan
    Project Euler - Problem 48
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1001

int dat[MAX][MAX];

int main()
{
    ios_base::sync_with_stdio(0);
    int num, len=0, carry=0, sum;
    for(int i=1;i<MAX;i++)
    {
        num=i;
        len=0;
        while(num)
        {
            dat[i][len++]=num%10;
            num/=10;
        }
        /*for(int j=0;j<len;j++)
            cout<<dat[i][j];
        cout<<" -> ";*/
        for(int j=1;j<i;j++)
        {
            carry=0;
            for(int k=0;k<len;k++)
            {
                dat[i][k]=dat[i][k]*i+carry;
                carry=dat[i][k]/10;
                dat[i][k]%=10;
            }
            if(len>75)
                continue;
            while(carry)
            {
                dat[i][len++]=carry%10;
                carry/=10;
            }
        }
        /*for(int j=0;j<len;j++)
            cout<<dat[i][j];
        cout<<endl;*/
    }
    carry=0;
    vector<int> ans;
    for(int j=0;j<10;j++)
    {
        sum=0;
        for(int i=0;i<MAX;i++)
        {
            sum+=dat[i][j];
        }
        sum+=carry;
        carry=sum/10;
        ans.push_back(sum%10);
    }
    reverse(ans.begin(), ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}
