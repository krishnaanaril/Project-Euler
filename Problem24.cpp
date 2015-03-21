/*
    Krishna Mohan
    Project Euler - Problem 24
    Date: 3/19/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define LIM 1000000

int main()
{
    ios_base::sync_with_stdio(0);
    int dig[]={0,1,2,3,4,5,6,7,8,9};
    int cnt=0;
    while(cnt<LIM-1)
    {
        next_permutation(dig, dig+10);
        cnt++;
    }
    fo(i, 10)
        cout<<dig[i];
    cout<<endl;
    return 0;
}
