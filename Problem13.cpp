/*
    Krishna Mohan
    Project Euler - Problem 13
    Date: 3/17/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
int num[101][51], ans[110];

int main()
{
    ios_base::sync_with_stdio(0);
    string str;
    for(int i=0;i<100;i++)
    {
        cin>>str;
        for(int j=49;j>=0;j--)
        {
            num[i][49-j]=str[j]-'0';
        }
    }
    cout<<"Check:"<<num[1][0]<<endl;
    int carry=0, len=0;
    for(int j=0;j<50;j++)
    {
        for(int i=0;i<100;i++)
        {
            ans[len]+=num[i][j];
        }
        ans[len]+=carry;
        carry=ans[len]/10;
        ans[len]%=10;
        cout<<len<<" : "<<ans[len]<<" : "<<carry<<endl;
        len++;
    }
    while(carry)
    {
        ans[len++]=carry%10;
        carry/=10;
    }
    for(int i=len;i>=0;i--)
    {
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}
