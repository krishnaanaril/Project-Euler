/*
    Krishna Mohan
    Project Euler - Problem 12
    Date: 3/17/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000000

bitset<MAX> isPrime;
vector<int> primes;
int psz;

void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    for(int i=4; i<MAX;i+=2)
    {
        isPrime[i]=0;
    }
    primes.push_back(2);
    for(int i=3;i<MAX;i+=2)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
            for(int j=2*i;j<MAX; j+=i)
                isPrime[j]=0;
        }
    }
    psz=primes.size();
}

int factCount(int num)
{
    int ans=1, cnt;
    for(int i=0;i<psz;i++)
    {
        cnt=0;
        //cout<<num<<" : "<<primes[i]<<endl;
        while(num!=1 && num%primes[i]==0)
        {    
            num/=primes[i];
            cnt++;
        }
        if(cnt)
        {
            //cout<<num<<"->"<<primes[i]<<endl;
            ans*=(cnt+1);
        }
        //cout<<num<<"<"<<endl;
        if(num==1)
            break;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    int n, fc=6, i=7;
    while(fc<=500)
    {    
        n=i*(i+1)/2;
        fc=factCount(n);
        cout<<n<<"-> "<<fc<<endl;
        i++;
    }
    return 0;
}
