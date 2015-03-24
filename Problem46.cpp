/*
    Krishna Mohan
    Project Euler - Problem 46
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000001

bitset<MAX> isPrime;
vector<int> primes;
void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    for(int i=4;i<MAX;i+=2)
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

bool isPS(int num)
{
    int sq=sqrt(num);
    return (sq*sq)==num;
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    for(int i=33;i<MAX;i+=2)
    {
        int j=0, f=0;
        if(isPrime[i])
            continue;          
        while(primes[j]<i)
        {
             if(isPS((i-primes[j])/2))
             {
                 f=1;
                 break;
             }  
             j++;              
        } 
        
        if(f==0)
        {
            cout<<"Ans: "<<i<<endl;
            break;
        }
    }
    return 0;
}
