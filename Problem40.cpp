/*
    Krishna Mohan
    Project Euler - Problem 40
    Date: 3/24/2015
*/
#include <bits/stdc++.h>

using namespace std;

#define fo(i, n) for(int (i)=0;(i)<(n); (i)++)
#define MAX 1000001

int main()
{
    ios_base::sync_with_stdio(0);
    string str="0";
    for(int i=1;i<MAX;i++)
    {
        ostringstream ss;
        ss<<i;
        str+=ss.str();
    }
    /*cout<<str[12]<<" : "<<((str[10]-'0')*1)<<" : "<<((str[12]-'0')*1)<<endl;
    cout<<(str[1]-'0')<<" : "<<(str[10]-'0')<<" : "<<(str[100]-'0')<<" : ";
    cout<<(str[1000]-'0')<<" : "<<(str[10000]-'0')<<" : "<<(str[100000]-'0')<<" : "<<(str[1000000]-'0')<<endl;*/
    cout<<((str[1]-'0')*(str[10]-'0')*(str[100]-'0')*(str[1000]-'0')*(str[10000]-'0')*(str[100000]-'0')*(str[1000000]-'0'))<<endl;
    return 0;
}
