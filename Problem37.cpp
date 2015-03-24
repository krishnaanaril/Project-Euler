/*
    Krishna Mohan
    Project Euler - Problem 37
    Date: 3/22/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000001
 
bitset<MAX> isPrime;
 
void init()
{
            isPrime.set();
            isPrime[0]=isPrime[1]=0;
            for(int i=4;i<MAX;i+=2)
            {
                        isPrime[i]=0;
            }
            for(int i=3;i<MAX;i++)
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
 
int main() {
            init();
            int num[25], len, n;
            long long sum=0;
            for(int i=11;i<MAX;i++)
            {
                        len=0;
                        n=i;
                        while(n)
                        {
                                    num[len++]=n%10;
                                    n/=10;
                        }
                        /*if(i==51)
                        {
                                    for(int j=0;j<len;j++)
                                                cout<<num[j];
                                    cout<<endl;
                        }*/
                        int f=0;
                        for(int j=len-1;j>=0;j--)
                        {
                                    n=0;
                                    for(int k=j;k>=0;k--)
                                    {
                                                n=n*10+num[k];
                                    }
                                    /*if(i==51)
                                                cout<<"Digs: "<<n<<endl;*/
                                    if(!isPrime[n])
                                    {
                                                f=1;
                                                break;
                                    }          
                        }
                        int l=0;
                        for(int j=0;j<len;j++)
                        {
                                    n=0;
                                    for(int k=len-1;k>=j;k--)
                                    {
                                                n=n*10+num[k];
                                    }
                                    if(!isPrime[n])
                                    {
                                                l=1;
                                                break;
                                    }          
                        }
                        if(!f && !l)
                        {
                                    sum+=i;
                                    //cout<<i<<endl;
                        }
            }
            cout<<"Ans: "<<sum<<endl;
            return 0;
}
