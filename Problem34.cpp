/*
    Krishna Mohan
    Project Euler - Problem 3
    Date: 3/22/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 999999
 
int main() {
            int fact[10];
            fill(fact, fact+10, 1);
            for(int i=2;i<10;i++)
            {
                        fact[i]=i*fact[i-1];
            }
            long long sum, ans=0;
            for(int i=11;i<=MAX;i++)
            {
                        sum=0;
                        int num=i;
                        while(num)
                        {
                                    sum+=fact[num%10];
                                    num/=10;
                        }
                        /*if(i==154)
                                    cout<<"Sum: "<<sum<<endl;*/
                        if(sum==i)
                        {
                                    //cout<<i<<endl;
                                    ans+=i;
                        }
            }
            cout<<ans<<endl;
            return 0;
}
