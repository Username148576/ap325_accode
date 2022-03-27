#include <iostream>

using namespace std;

int x[15][15],Max=50;

void f(int sn,int n,int sm,int m,int t)
{
    if(t>Max)return;
    if(n-sn==1 || m-sm==1)
    {
        if(t<Max)Max=t;
        return;
    }
    int i,t1=0;
    for(i=sn;i<n;i++)if(x[i][sm]==1)t1+=1;
    if(t1>(n-sn)/2)f(sn,n,sm+1,m,n-sn-t1+t);
    else f(sn,n,sm+1,m,t1+t);
    t1=0;
    for(i=sn;i<n;i++)if(x[i][m-1]==1)t1+=1;
    if(t1>(n-sn)/2)f(sn,n,sm,m-1,n-sn-t1+t);
    else f(sn,n,sm,m-1,t1+t);
    t1=0;
    for(i=sm;i<m;i++)if(x[sn][i]==1)t1+=1;
    if(t1>(m-sm)/2)f(sn+1,n,sm,m,m-sm-t1+t);
    else f(sn+1,n,sm,m,t1+t);
    t1=0;
    for(i=sm;i<m;i++)if(x[n-1][i]==1)t1+=1;
    if(t1>(m-sm)/2)f(sn,n-1,sm,m,m-sm-t1+t);
    else f(sn,n-1,sm,m,t1+t);
}

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>x[i][j];
    f(0,n,0,m,0);
    cout<<Max;
    return 0;
}
