/*
    Krishna Mohan
    Project Euler - Problem 50
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000001
#define pb push_back

bitset<MAX> isPrime;
vector<int> primes;

void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    for(int i=4;i<MAX;i+=2)
        isPrime[i]=0;
    primes.pb(2);
    for(int i=3;i<MAX;i++)
    {
        if(isPrime[i])
        {
            primes.pb(i);
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
    int sum=0, max=0, cnt, maxSum, sz=primes.size();
    for(int i=0;i<sz;i++)
    {
        sum=0, cnt=0;
        for(int j=i;j<sz;j++)
        {
            sum+=primes[j];
            cnt++;
            if(sum>=MAX)
                break;
            if(isPrime[sum] && cnt>max)
            {
                max=cnt;
                maxSum=sum;
            }
        }
    }
    cout<<"Ans: "<<max<<", "<<maxSum<<endl;
    return 0;
}
