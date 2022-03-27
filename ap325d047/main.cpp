#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct p{
    int a,b;
};

vector<p> v;

bool cmp(p x,p y)
{
    return y.a*x.b<y.b*x.a;
}

int main()
{
    long long n,i,t=0,ans=0,x[100005],a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        t+=x[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back({x[i],a});
    }
    sort(v.begin(),v.end(),cmp);
    for(i=0;i<n;i++)
    {
        t-=v[i].a;
        ans+=v[i].b*t;
    }
    cout<<ans<<endl;
    return 0;
}
