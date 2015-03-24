/*
    Krishna Mohan
    Project Euler - Problem 38
    Date: 3/22/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 100001
 
int main() {
            int num, len, m[10], f;
            string str="", max="";
            for(int i=1;i<MAX;i++)
            {
                        memset(m, 0, sizeof(m));
                        len=0;
                        str="";
                        for(int j=1;j<10;j++)
                        {
                                    num=i*j;
                                    ostringstream ss;
                                    ss<<num;
                                    str+=ss.str();
                                    while(num)
                                    {
                                                m[num%10]++;
                                                num/=10;
                                                len++;
                                    }
                                    if(len>=9)
                                                break;
                        }
                        if(len>9)
                                    continue;
                        else
                        {
                                    f=0;
                                    for(int k=1;k<10;k++)
                                    {
                                                if(m[k]!=1)
                                                {
                                                            f=1;
                                                            break;
                                                }
                                    }
                                    if(!f)
                                                cout<<i<<" -> "<<str<<endl;
                        }
            }
            return 0;
}
