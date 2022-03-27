#include <iostream>

using namespace std;

long long x[205][205],y[205];

int main()
{
    int m,n,i,j,k,a,b,Max=0;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a;
            if(i>0)x[i][j]=a+x[i-1][j];
            else x[i][j]=a;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<=m;j++)
        {
            b=0;
            for(k=0;k<n;k++)
            {
                a=x[j][k]-x[i][k];
                if(b<0)b=a;
                else b=a+b;
                if(b>Max)Max=b;
            }
        }
    }
    cout<<Max<<endl;
    return 0;
}
