/*
    Krishna Mohan
    Project Euler - Problem 22
    Date: 3/18/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)

int main()
{
    ios_base::sync_with_stdio(0);
    vector<string> dat;
    string str;
    while(cin>>str)
    {
        dat.push_back(str);
    }
    sort(dat.begin(), dat.end());
    int sz=dat.size(), n;
    unsigned long long sum=0, tsum=0;
    for(int i=0;i<sz;i++)
    {
        n=dat[i].size();
        cout<<dat[i]<<endl;
        tsum=0;
        for(int j=0;j<n;j++)
        {
            tsum+=dat[i][j]-'A'+1;
        }
        sum+=((i+1)*tsum);
    }
    cout<<sum<<endl;
    return 0;
}
