/*
    Krishna Mohan
    Project Euler - Problem 33
    Date: 3/22/2015
*/
#include <bits/stdc++.h>
using namespace std;
 
#define MAX 100
 
int gcd(int a, int b)
{
            if(b==0)
                        return a;
            return gcd(b, a%b);
}
 
int main() {
            double div1, div2;
            int a, b, c, d, num=1, den=1, g;
            for(int i=11;i<MAX;i++)
            {
                        for(int j=i+1;j<MAX;j++)
                        {
                                    div1=(double)i/j;
                                    a=i%10, b=(i/10)%10, c=j%10, d=(j/10)%10;
                                    if(a==c || a==d || b==c || b==d)
                                    {
                                                div2=-1;
                                                if(a==c && d!=0)
                                                            div2=(double)b/d;
                                                else if(a==d && c!=0)
                                                            div2=(double)b/c;
                                                else if(b==c && d!=0)
                                                            div2=(double)a/d;
                                                else if(b==d && c!=0)
                                                            div2=(double)a/c;
                                               
                                                /*(i==30 && j==50)
                                                {
                                                            cout<<a<<" : "<<b<<" : "<<c<<" : "<<d<<endl;
                                                            cout<<div1<<" : "<<div2<<endl;
                                                }*/
                                                if(div1==div2)
                                                {
                                                            if(a!=0 && b!=0 && c!=0 && d!=0)
                                                            {
                                                                        //cout<<i<<"/"<<j;
                                                                        g=gcd(j, i);
                                                                        //cout<<" -> "<<(i/g)<<"/"<<(j/g)<<endl;
                                                                        num*=i/g;
                                                                        den*=j/g;
                                                            }
                                                            //cout<<a<<" : "<<b<<" : "<<c<<" : "<<d<<endl;
                                                            //cout<<div1<<" : "<<div2<<endl;
                                                }
                                    }
                                    else
                                                continue;
                        }
            }
            cout<<(den/gcd(den, num))<<endl;
            return 0;
}
