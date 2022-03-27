#include <iostream>
#include<map>

using namespace std;

int main()
{
    long long n,a,i,ans=0;
    long long x[100005],y[100005];
    multimap<float,long long,greater<float> > m;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>x[i];
    for(i=0;i<n;i++)
    {
        cin>>a;
        y[i]=a;
        m.insert({(float)a/x[i],i});
    }
    a=0;
    for(auto e:m)
    {
        x[e.second]+=a;
        a=x[e.second];
        ans+=x[e.second]*y[e.second];
    }
    cout<<ans<<endl;
    return 0;
}
