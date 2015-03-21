/*
    Krishna Mohan
    Project Euler - Problem 8
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define N 13

int main()
{
    ios_base::sync_with_stdio(0);
    string mainStr="", str;
    while(cin>>str)
    {
        mainStr+=str;
    }
    int sz;
    long long buf=1, max=0;
    sz=mainStr.size();
    for(int i=0;i<sz-N;i++)
    {
        buf=1;
        for(int j=i;j<i+N;j++)
        {
            buf*=(mainStr[j]-'0');
        }        
        if(buf>max)
            max=buf;
    }
    cout<<max<<endl;
    return 0;
}
