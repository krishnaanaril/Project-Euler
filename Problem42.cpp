/*
    Krishna Mohan
    Project Euler - Problem 42
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000001

bitset<MAX> isTriNum;

void init()
{
    int i=1, tn=0;
    isTriNum.reset();
    while(true)
    {
        tn=(i*(i+1))/2;
        if(tn>=MAX)
            break;
        isTriNum[tn]=1;
        i++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int num=0, sz, cnt=0;
    string str;
    init();
    while(cin>>str)
    {
        sz=str.size();
        num=0;
        fo(i, sz)
        {
            num+=str[i]-'A'+1;
        }
        if(isTriNum[num])
            cnt++;
    }
    cout<<"Ans: "<<cnt<<endl;
    return 0;
}
