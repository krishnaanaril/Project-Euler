/*
    Krishna Mohan
    Project Euler - Problem 6
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define N 100

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    ll a, b;
    a=(N*(N+1))/2;
    a=pow(a, 2);
    b=(N*(N+1)*(2*N+1))/6;
    cout<<(a-b)<<endl;
    return 0;
}
