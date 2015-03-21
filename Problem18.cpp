/*
    Krishna Mohan
    Project Euler - Problem 18
    Date: 3/18/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 101
#define N 100
int dat[MAX][MAX];

int main()
{
    ios_base::sync_with_stdio(0);
    for(int i=0;i<N;i++)
    {   
        for(int j=0;j<=i;j++)
        {   
            cin>>dat[i][j];
            //cout<<dat[i][j];
        }
        //cout<<endl;
    }
    for(int i=1;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            dat[i][j]+=max(dat[i-1][j], dat[i-1][j-1]);
        }
    }
    int max=0;
    for(int i=0;i<N;i++)
    {
        if(dat[N-1][i]>max)
            max=dat[N-1][i];
    }
    cout<<max<<endl;
    return 0;
}
