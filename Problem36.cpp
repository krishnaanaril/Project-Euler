/*
    Krishna Mohan
    Project Euler - Problem 36
    Date: 3/22/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
 
#define MAX 1000001
#define LIM    50
 
bool isPalin(int n[LIM], int sz)
{
            for(int i=0,j=sz-1;i<j;i++,j--)
            {
                        if(n[i]!=n[j])
                                    return false;
            }
            return true;
}
 
 
int main() {
            int dnum[LIM], bnum[LIM], dlen, blen, num;
            long long sum=0;
            for(int i=1;i<MAX;i++)
            {
                        dlen=0;
                        num=i;
                        while(num)
                        {
                                    dnum[dlen++]=num%10;
                                    num/=10;
                        }
                        num=i;
                        blen=0;
                        while(num)
                        {
                                    bnum[blen++]=num%2;
                                    num/=2;
                        }
                        /*if(i==585)
                        {
                                    cout<<blen<<" : "<<dlen<<endl;
                                    for(int k=0;k<dlen;k++)
                                                cout<<dnum[k];
                                    cout<<endl;
                                    for(int k=0;k<blen;k++)
                                                cout<<bnum[k];
                                    cout<<endl;
                        }*/
                        if(isPalin(dnum, dlen) && isPalin(bnum, blen))
                        {
                                    //cout<<i<<endl;
                                    sum+=i;
                        }
            }
            cout<<"Ans: "<<sum<<endl;
            return 0;
}
