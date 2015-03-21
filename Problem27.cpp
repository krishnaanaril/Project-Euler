/*
    Name: Krishna Mohan
    Date: 3/21/2015
    Algorithm:
    Site:
    Contest:
*/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<string> vs;
typedef vector<pi> vpi;

// Basic macros
#define fi          first
#define se          second
#define all(x)      (x).begin(), (x).end()
#define ini(a, v)   memset(a, v, sizeof(a))
#define re(i,s,n)  	for(int i=s;i<(n);++i)
#define rep(i,s,n)  for(int i=s;i<=(n);++i)
#define fo(i,n)     re(i,0,n)
#define rev(i,n,s)  for(int i=(n)-1;i>=s;--i)
#define repv(i,n,s) for(int i=(n);i>=s;--i)
#define fov(i,n)    rev(i,n,0)
#define pb          push_back
#define mp          make_pair
#define si(x)       (int)(x.size())
#define MAX 1000000
#define INF 1000000007
#define MOD 1000000007

const double PI = acos(-1.0);
const int inf = 0x3f3f3f3f;
const double eps = 1e-15;

bitset<MAX> isPrime;

void init()
{
    isPrime.set();
    isPrime[0]=isPrime[1]=0;
    for(int i=4;i<MAX;i+=2)
    {
        isPrime[i]=0;
    }
    int sz=sqrt(MAX);
    for(int i=3;i<sz;i++)
    {
        for(int j=2*i;j<MAX;j+=i)
        {
            isPrime[j]=0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int max=0, ans, maxa, maxb;
    init();
    /*for(int i=0;i<50;i++)
    {
        cout<<isPrime[i]<<" -> ";
        if(isPrime[i])
            cout<<i<<endl;
    }    
    cout<<endl;*/
    for(int i=-999;i<1000;i++)
    {
        for(int j=-999;j<1000;j++)
        {
            int n=0;
            while(true)
            {
                ans=(n*n)+(i*n)+j;
                /*if(i==1 && j==41)
                    cout<<ans<<endl;*/
                if(ans>0 && isPrime[ans])
                {
                    n++;
                }
                else
                    break;
            }   
            if(i==1 && j==41) 
                cout<<n<<endl;        
            if(n>max)
            {
                maxa=i;
                maxb=j;
                max=n;
            }
        }
    }
    cout<<max<<endl;
    cout<<maxa<<" : "<<maxb<<(maxa*maxb)<<endl;
    return 0;
}
