/*
    Krishna Mohan
    Project Euler - Problem 41
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 100000001

bitset<MAX> isPrime;

void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    for(int i=4;i<MAX;i+=2)
        isPrime[i]=0;
    for(int i=3;i<MAX;i+=2)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<MAX;j+=i)
            {
                isPrime[j]=0;
            }
        }
    }    
}

inline bool isPanDig(int n)
{
    int m[10]={0};
    int num=n, len=0;
    while(num)
    {
        m[num%10]++;
        num/=10;
        len++;
    }
    int f=0;
    for(int i=1;i<=len;i++)
    {
        if(m[i]!=1)
        {
            f=1;
            break;
        }
    }
    if(!f)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    int max=0;
    for(int i=1;i<MAX;i++)
    {
        if(isPrime[i] && isPanDig(i))
        {
            cout<<i<<endl;    
            if(i>max)
                max=i;
        }
    }
    cout<<"Ans: "<<max<<endl;
    return 0;
}
