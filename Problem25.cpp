/*
    Krishna Mohan
    Project Euler - Problem 25
    Date: 3/18/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 2000

int a[MAX], b[MAX], c[MAX];

int main()
{
    ios_base::sync_with_stdio(0);
    int len=1, carry, term=1;
    a[0]=0;
    b[0]=1;
    while(len<1000)
    {
        carry=0;
        fo(i, len)
        {    
            c[i]=a[i]+b[i]+carry;
            carry=c[i]/10;
            c[i]%=10;
        }
        while(carry)
        {
            c[len++]=carry%10;
            carry/=10;
        }
        term++;
        fo(i, len) 
        {
            a[i]=b[i];
        }          
        fo(i, len)
            b[i]=c[i];
       /*for(int i=len-1; i>=0;i--)
           cout<<c[i];
       cout<<endl;*/
 
    }
/*    for(int i=len-1; i>=0;i--)
        cout<<c[i];
    cout<<endl;*/
    cout<<term<<endl;
    return 0;
}
