#include <iostream>
#include<algorithm>

using namespace std;

int n,k,a=0;
long long m[100005];

long long f(long long s,long long b)
{
    if(s==b)return s;
    else if(s==b-1)
    {
        a+=1;
        if(a==2)return b;
    }
    if(a<2){
    long long M=(s+b)/2;
    //cout<<M<<endl;
    long long t=0,x,bo=0,i;
    for(i=0;i<=k;i++)
    {
        x=lower_bound(m,m+n,M+t,greater<long long>())-m;
        t=m[x];
        //cout<<x<<endl;
        if(x==0)
        {
            bo=1;
            f(s,M);
            break;
        }
    }

    if(bo==0)f(M,b);}
}

int main()
{
    int i,x;
    cin>>n>>k;
    cin>>m[n-1];
    for(i=1;i<n;i++)
    {
        cin>>x;
        m[n-i-1]=m[n-i]+x;
    }
    cout<<f(m[n-1],m[0])<<endl;
    return 0;
}
