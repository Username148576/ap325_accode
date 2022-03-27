#include <iostream>
#include<map>
using namespace std;

long long p,ans=-1,x[20],y[20],n,a;
map<int,int> m1,m2;

void f(long long t,int i,int b)
{
    if(b==0)m1[t]+=1;
    if(i==n/2)
    {
        if(t==1)
        {
            ans+=1;
        }
        return;
    }
    f(x[i]%p*t%p,i+1,0);
    f(t,i+1,1);
}

void g(long long t,int i,int b)
{
    if(b==0)m2[t]+=1;
    //cout<<t<<endl;
    if(i==n-n/2)
    {
        if(t==1)
        {
            ans+=1;
        }
        return;
    }
    g(y[i]%p*t%p,i+1,0);
    g(t,i+1,1);
}

long long f(int i)
{
    if(i==1)return a%p;
    long long b=f(i/2);
    if(i%2==0)return b%p*b%p;
    else return b%p*b%p*a%p;
}

int main()
{
    int i;
    long long b;
    cin>>n>>p;
    for(i=0;i<n/2;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<n-n/2;i++)
    {
        cin>>y[i];
    }
    f(1,0,2);
    //cout<<ans<<endl;
    ans%=p;
    g(1,0,2);
    ans-=1;
    //cout<<ans<<endl;
    ans%=p;
    for(auto e:m1)
    {
        a=e.first;
        b=f(p-2);
        //cout<<b<<endl;
        auto it=m2.find(b);
        if(it!=m2.end())
        {
            //cout<<it->second<<endl;
            ans+=e.second%p*it->second%p;
            ans%=p;
        }
    }
    cout<<ans;
    return 0;
}
