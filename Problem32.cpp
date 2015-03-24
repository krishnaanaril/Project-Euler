/*
    Krishna Mohan
    Project Euler - Problem 32
    Date: 3/22/2015
*/
#include <bits/stdc++.h>
using namespace std;
 
#define MAX 2999
 
int main() {
            int m[10], temp, ans, f;
            set<int> s;
            for(int i=1;i<=MAX;i++)
            {
                        for(int j=1;j<=MAX;j++)
                        {
                                    ans=i*j;
                                    memset(m, 0, sizeof(m));
                                    temp=i;
                                    while(temp)
                                    {
                                                m[temp%10]++;
                                                temp/=10;
                                    }
                                    temp=j;
                                    while(temp)
                                    {
                                                m[temp%10]++;
                                                temp/=10;
                                    }
                                    temp=ans;
                                    while(temp)
                                    {
                                                m[temp%10]++;
                                                temp/=10;
                                    }
                                    f=0;
                                    if(m[0]!=0)
                                                f=1;
                                    for(int k=1;k<10;k++)
                                    {
                                                if(m[k]!=1)
                                                {
                                                            f=1; break;
                                                }
                                    }
                                    if(!f)
                                    {
                                                //cout<<i<<" * "<<j<<" = "<<ans<<endl;
                                                s.insert(ans);
                                    }
                        }
            }
            int sz=s.size();
            int sum=0;
            for(set<int>::iterator it=s.begin();it!=s.end(); it++)
            {
                        //cout<<"In Set: "<<(*it)<<endl;
                        sum+=(*it);
                        //cout<<"In Set: "<<(*it)<<" Sum: "<<sum<<endl;
            }
            cout<<"Ans: "<<sum<<endl;
            return 0;
}
