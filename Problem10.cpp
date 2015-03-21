/*
    Krishna Mohan
    Project Euler - Problem 10
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 2000001

long long sum;
bitset<MAX> isPrime;

void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    int sq=sqrt(MAX);
    for(int i=4;i<MAX;i+=2)
    {
        isPrime[i]=0;
    }
    sum+=2;
    for(int i=3;i<MAX;i+=2)
    {
        if(isPrime[i])
        {
            sum+=i;
            for(int j=2*i;j<MAX;j+=i)
            {
                isPrime[j]=0;
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    init();
    cout<<sum<<endl;   
    return 0;
}
