/*
    Krishna Mohan
    Project Euler - Problem 19
    Date: 3/18/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)

int dow(int d, int m, int y)
{
    int t[]={0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y-=m<3;
    return (y+y/4-y/100+y/400+t[m-1]+d)%7;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int cnt=0;
    for(int i=1901;i<=2000;i++)
    {
        for(int j=1;j<=12;j++)
        {
            if(dow(1, j, i)==0)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
