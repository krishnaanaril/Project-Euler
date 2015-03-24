/*
    Krishna Mohan
    Project Euler - Problem 44
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 100000001
#define pb push_back


bitset<MAX> isPent;
vector<int> pents;

void init()
{
    isPent.reset();
    int tn, i=1;
    while(true)
    {
        tn=(i*(3*i-1))/2;
        if(tn>=MAX)
            break;
        isPent[tn]=1;
        pents.pb(tn);
        i++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    int sz=pents.size();
    int s, d, minVal=INT_MAX;
    for(int i=0;i<sz-1;i++)
    {
        for(int j=i+1;j<sz;j++)
        {
            s=pents[i]+pents[j];
            d=abs(pents[i]-pents[j]);
            if(s>=MAX || d>=MAX)
                break;
            if(isPent[s] && isPent[d])
            {
                cout<<"D: "<<d<<endl;
                minVal=min(minVal, d);
            }
        }
    }
    cout<<"Ans: "<<minVal<<endl;
    return 0;
}
