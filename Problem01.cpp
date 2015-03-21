/*
    Krishna Mohan
    Project Euler - Problem 1
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)

int main()
{
    ios_base::sync_with_stdio(0);
    int sum=0;
    fo(i, 1000)
        if(i%3==0 || i%5==0)
        {
            sum+=i;
            //cout<<i<<endl;
        }
    cout<<sum<<endl;
    return 0;
}
