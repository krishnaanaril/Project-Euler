/*
    Krishna Mohan
    Project Euler - Problem 3
    Date: 3/15/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define foj(i, j, n) for(int (i)=(j);(i)<=(n); (i)++)

int main()
{
    ios_base::sync_with_stdio(0);
    long long num=600851475143, sq;
    int j;
    sq=sqrt(num);
    j=num;
    foj(i, 2, sq)
    {
        while(num%i==0)
        {
            cout<<i<<endl;
            num/=i;
            j=i;
        }        
    }
    cout<<j<<endl;
    return 0;
}
