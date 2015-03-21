/*
    Krishna Mohan
    Project Euler - Problem 20
    Date: 3/18/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)

int two[1001];

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    two[0]=1;
    int len=1;
    for(int i=1;i<=n;i++)
    {
        int carry=0;
        for(int j=0;j<len;j++)
        {
            two[j]=(two[j]*i)+carry;
            carry=two[j]/10;
            two[j]=two[j]%10;
        }
        while(carry)
        {
            two[len++]=carry%10;
            carry/=10;
        }
    }
    int sum=0;
    for(int i=len-1;i>=0;i--)
    {
        sum+=two[i];
        cout<<two[i];
    }
    cout<<endl;
    cout<<"Sum: "<<sum<<endl;
    return 0;
}
