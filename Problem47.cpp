/*
    Krishna Mohan
    Project Euler - Problem 47
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000001

bitset<MAX> isPrime;
int primeCount[MAX];
vector<int> primes;

void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<MAX;i+=2)
        isPrime[i]=0;
    primes.push_back(2);
    for(int i=3;i<MAX;i+=2)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
            for(int j=2*i;j<MAX;j+=i)
                isPrime[j]=0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    for(int i=3;i<MAX;i++)
    {
        if(isPrime[i])
            primeCount[i]++;
        else
        {
            int num=i, j=0;
            //cout<<"i: "<<i<<endl;
            while(num && primes[j]<num)
            {
                int f=0;
                //cout<<"pj: "<<primes[j];
                while(num%primes[j]==0 && num>0)
                {
                    f=1;
                    num/=primes[j];
                }
                j++;
                //cout<<" num: "<<num<<endl;
                if(f==1)
                    primeCount[i]++;
                if(isPrime[num])
                {
                    primeCount[i]++;
                    break;
                }
            }
        }
    }
    cout<<primeCount[644]<<" : "<<primeCount[645]<<" : "<<primeCount[646]<<endl;
    int a=primeCount[0], b=primeCount[1], c=primeCount[2], d;
    for(int i=2;i<MAX;i++)
    {
        c=primeCount[i];
        if(a==3 && b==3 && c==3)
        {
            cout<<(i-2)<<" : "<<(i-1)<<" : "<<(i)<<endl;
            break;
        }
        a=b;
        b=c;
    }
    a=primeCount[0], b=primeCount[1], c=primeCount[2];
    for(int i=3;i<MAX;i++)
    {
        d=primeCount[i];
        if(a==4 && b==4 && c==4 && d==4)
        {
            cout<<(i-3)<<" : "<<(i-2)<<" : "<<(i-1)<<" : "<<(i)<<endl;
            break;
        }
        a=b;
        b=c;
        c=d;
    }
    return 0;
}
