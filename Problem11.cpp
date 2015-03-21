#include <bits/stdc++.h>

using namespace std;
#define MAX 20


int main()
{
    int dat[MAX][MAX];
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            cin>>dat[i][j];
        }
    }
    int max=-1, prod;
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            //right
            if(j+3<MAX)
            {
                prod=1;
                for(int k=0;k<4;k++)
                {
                    prod*=dat[i][j+k];
                }
                if(prod>max)
                    max=prod;
            }
            //left
            if(j-3>=0)
            {
                prod=1;
                for(int k=0;k<4;k++)
                {
                    prod*=dat[i][j-k];
                }
                if(prod>max)
                    max=prod;
            }
            //up
            if(i-3>=0)
            {
                prod=1;
                for(int k=0;k<4;k++)
                {
                    prod*=dat[i-k][j];
                }
                if(prod>max)
                    max=prod;
            }
            //down
            if(i+3<MAX)
            {
                prod=1;
                for(int k=0;k<(4);k++)
                {
                    prod*=dat[i+k][j];
                }    
                if(prod>max)
                    max=prod;
            }
            //left-up diagonal
            if(i-3>=0 && j-3>=0)
            {
                prod=1;
                for(int k=0;k<4;k++)
                {
                    prod*=dat[i-k][j-k];
                }
                if(prod>max)
                    max=prod;
            }
            //right -up diagonal
            if(i-3>=0 && j+3<MAX)
            {
                prod=1;
                for(int k=0;k<4;k++)
                {
                    prod*=dat[i-k][j+k];
                }
                if(prod>max)
                    max=prod;
            }
            //left -down diagonal
            if(i+3<MAX && j-3>=0)
            {
                prod=1;
                for(int k=0;k<4;k++)
                {
                    prod*=dat[i+k][j-k];
                }
                if(prod>max)
                    max=prod;
            }
            //right-down diagonal
            if(i+3<MAX && j+3<MAX)
            {
                prod=1;
                for(int k=0;k<4;k++)
                {
                    prod*=dat[i+k][j+k];
                }
                if(prod>max)
                    max=prod;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
