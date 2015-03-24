/*
    Krishna Mohan
    Project Euler - Problem 35
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
                        isPrime[i]=0;
            for(int i=3;i<MAX;i+=2)
            {
                        if(isPrime[i])
                        {
                                    for(int j=2*i;j<MAX;j+=i)
                                                isPrime[j]=0;
                        }
            }
}
 
int main() {
            init();
            int dat[10], num , len, cnt=0;
            for(int i=2;i<MAX;i++)
            {
                        if(isPrime[i])
                        {
                                    num=i;
                                    len=0;
                                    while(num)
                                    {
                                                dat[len++]=num%10;
                                                num/=10;
                                    }
                                    int f=0;
                                    for(int i=len-1;i>=0;i--)
                                    {
                                                num=0;
                                                for(int j=i, k=0;k<len;j--, k++)
                                                {
                                                            num=num*10+dat[(j+len)%len];
                                                }
                                                if(!isPrime[num])
                                                            f=1;
                                    }
                                    if(!f)
                                    {
                                                cnt++;
                                                //cout<<i<<endl;
                                    }
                        }
            }
            cout<<"Ans: "<<cnt<<endl;
            return 0;
}
