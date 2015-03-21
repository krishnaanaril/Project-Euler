/*
    Krishna Mohan
    Project Euler - Problem 7
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 10000001

bitset<MAX> isPrime;
vector<int> primes;


void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    int sq=sqrt(MAX);
    primes.push_back(2);
    for(int i=4;i<MAX;i+=2)
    {
        isPrime[i]=0;
    }
    for(int i=3;i<MAX;i+=2)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
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
    cout<<primes.size()<<endl;
    cout<<primes[10000]<<endl;
    return 0;
}
