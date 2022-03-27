#include <iostream>
#include<set>

using namespace std;

long long n,ans,Max=0,x[20],y[20];
set<long long> s;
set<long long,greater<long long>> s1;

void f(long long t,int i)
{
    if(t>ans)return;
    s.insert(t);
    if(i==n/2)return;
    f(t+x[i],i+1);
    f(t,i+1);
}

void g(long long t,int i)
{
    if(t>ans)return;
    s1.insert(t);
    if(i==n-n/2)return;
    g(t+y[i],i+1);
    g(t,i+1);
}

int main()
{
    int i;
    cin>>n>>ans;
    for(i=0;i<n/2;i++)cin>>x[i];
    for(i=0;i<n-n/2;i++)cin>>y[i];
    f(0,0);
    g(0,0);
    for(auto e:s)
    {
        long long t=*s1.lower_bound(ans-e);
        if(t+e>Max)Max=t+e;
    }
    cout<<Max<<endl;
    return 0;
}
