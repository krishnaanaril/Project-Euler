/*
    Krishna Mohan
    Project Euler - Problem 43
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)

int main()
{
    ios_base::sync_with_stdio(0);
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int i=0;
    long long sum=0, num;
    while(next_permutation(a, a+10))
    {
        int t1 = ((a[1]*10)+a[2])*10+a[3],
            t2 = ((a[2]*10)+a[3])*10+a[4],
            t3 = ((a[3]*10)+a[4])*10+a[5],
            t4 = ((a[4]*10)+a[5])*10+a[6],
            t5 = ((a[5]*10)+a[6])*10+a[7],
            t6 = ((a[6]*10)+a[7])*10+a[8],
            t7 = ((a[7]*10)+a[8])*10+a[9];
            
        if(a[0]==1 &&
            a[1]==4 &&
            a[2]==0 &&
            a[3]==6 &&
            a[4]==3 &&
            a[5]==5 &&
            a[6]==7 &&
            a[7]==2 &&
            a[8]==8 &&
            a[9]==9 )
        {
            cout<<t1<<", "<<t2<<", "<<t3<<", "<<t4<<", "<<t5<<", "<<t6<<", "<<t7<<endl;
        }
        
        if(t1%2==0 && t2%3==0 && t3%5==0 && t4%7==0 &&
            t5%11==0 && t6%13==0 && t7%17==0)
        {
            i++;
            num=0;
            fo(j, 10)
            {
                num=num*10+a[j];
            }
            sum+=num;
            cout<<"NUM: "<<num<<endl;
        }
    }
    cout<<"Ans: "<<sum<<endl;
    return 0;
}
