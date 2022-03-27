#include <iostream>

using namespace std;

int x[200005];

int main()
{
    int n,m,k,a,b,t=0,i,j;
    cin>>n>>m>>k;
    a=m-k;
    for(i=0;i<n;i++)
    {
        cin>>b;
        t+=b;
        for(j=a;j>=b;j--)
        {
            if(x[j-b]+b>x[j])
                x[j]=x[j-b]+b;
        }
    }
    cout<<t-x[a];
    return 0;
}
