/*
    Krishna Mohan
    Project Euler - Problem 2
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 4000000

int main()
{
    ios_base::sync_with_stdio(0);
    int a=0, b=1, c;
    long long sum=0;
    c=a+b;
    while(c<=MAX)
    {
        a=b;
        b=c;
        c=a+b;
        if(c>MAX)
            break;
        if(!(c&1))
        {
            sum+=c;
            //cout<<"e->"<<c<<endl;
        }
        //cout<<"n->"<<c<<endl;;
    }
    cout<<sum<<endl;
    return 0;
}
