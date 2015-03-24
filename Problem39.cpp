/*
    Krishna Mohan
    Project Euler - Problem 39
    Date: 3/22/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1001
 
bool isPerfectSquare(int n)
{
            int sq=sqrt(n);
            return (sq*sq)==n;
}
 
int main() {
            int p[MAX];
            int h, pm, sq;
            memset(p, 0, sizeof(p));
            for(int i=1;i<MAX;i++)
            {
                        for(int j=1;j<MAX;j++)
                        {
                                    h=pow(i, 2)+pow(j, 2);
                                    pm=i+j+sqrt(h);
                                    if(isPerfectSquare(h) && pm<MAX)
                                    {
                                                //cout<<i<<" : "<<j<<" : "<<sqrt(h)<<endl;
                                                p[pm]++;
                                    }
                        }
            }
            int maxVal=0, pos=0;
            for(int i=0;i<MAX;i++)
            {
                        if(p[i]>maxVal)
                        {
                                    maxVal=p[i];
                                    pos=i;
                        }
            }
            //cout<<"120: "<<p[120]<<endl;
            cout<<"Ans: "<<pos<<endl;
            return 0;
}
