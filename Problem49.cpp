/*
    Krishna Mohan
    Project Euler - Problem 49
    Date: 3/25/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000001

bitset<MAX> isPrime;
int m[10], m1[10], m2[10];

void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<MAX;i+=2)
        isPrime[i]=0;
    for(int i=3;i<MAX;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<MAX;j+=i)
                isPrime[j]=0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    init();
    int num, f, k;
    for(int i=1001;i<10001;i+=2)
    {
        for(int j=i+2;j<10001;j+=2)
        {
            k=j+(j-i);
            if(isPrime[i] && isPrime[j] && isPrime[k])
            {
                memset(m, 0, sizeof(m));
                memset(m1, 0, sizeof(m));
                memset(m2, 0, sizeof(m));
                num=i;
                while(num)
                {
                    m[num%10]++;
                    num/=10;
                }
                num=j;
                while(num)
                {
                    m1[num%10]++;
                    num/=10;
                }
                num=k;
                while(num)
                {
                    m2[num%10]++;
                    num/=10;
                }
                f=0;
                for(int l=0;l<10;l++)
                {
                    if(m[l]!=m1[l] || m1[l]!=m2[l])
                    {
                        f=1;
                        break;
                    }
                }
                /*if(i==1487 && j==4817)
                {
                    cout<<k<<endl;
                    for(int l=0;l<10;l++)
                    {
                        cout<<m[l]<<" ";
                    }
                    cout<<endl;
                }*/
                if(!f)
                {
                    cout<<"m: ";
                    for(int l=0;l<10;l++)
                    {
                        cout<<m[l]<<" ";
                    }
                    cout<<"m1: ";
                    for(int l=0;l<10;l++)
                    {
                        cout<<m1[l]<<" ";
                    }
                    cout<<"m2: ";
                    for(int l=0;l<10;l++)
                    {
                        cout<<m2[l]<<" ";
                    }
                    cout<<endl;
                    cout<<"Ans: "<<i<<j<<k<<" : "<<(j-i)<<endl;
                }
            }
        }
    }
    return 0;
}
