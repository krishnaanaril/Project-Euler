/*
    Krishna Mohan
    Project Euler - Problem 31
    Date: 3/22/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 201

int main()
{
    ios_base::sync_with_stdio(0);
    int coins[]={1, 2, 5, 10, 20, 50, 100, 200};
    long long dat[MAX]={0};
    dat[0]=1;
    for(int i=0;i<8;i++)
    {
        for(int j=coins[i];j<MAX;j++)
        {
            dat[j]+=dat[j-coins[i]];
        }
    }
    /*for(int i=1;i<=10;i++)
    {
        cout<<i<<" : "<<dat[i]<<endl;
    }*/
    cout<<dat[200]<<endl;
    return 0;
}
