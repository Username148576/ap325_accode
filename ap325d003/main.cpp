#include <iostream>

using namespace std;

int x[50010];

long long f(int a,int b,double l)
{
    if(b-a==1)return 0;
    auto it=lower_bound(x+a,x+b+1,l/2+x[a]);
    int s=*it-l/2-x[a];
    if(it>=x+1){it--;
    int t=l/2+x[a]-*it;
    if(s<t)it++;}
    return l+f(a,it-x,x[it-x]-x[a])+f(it-x,b,x[b]-x[it-x]);
}

int main()
{
    int n,m,i;
    long long ans=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)cin>>x[i];
    x[0]=0;
    x[n+1]=m;
    cout<<f(0,n+1,m);
    return 0;
}
