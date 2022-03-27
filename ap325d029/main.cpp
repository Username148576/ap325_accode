#include <iostream>
#include<map>
#include<algorithm>

using namespace std;

map<int,int> m;

int x[200002],y[200002];
long long ans=0;

int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)cin>>x[i];
    for(i=1;i<=n;i++)cin>>y[i];
    m.insert({20000003,0});
    for(i=1;i<=n;i++)
    {
        auto it=m.upper_bound(x[i]+y[i]);
        ans+=i-it->second-1;
        while(x[i]>=m.begin()->first)m.erase(m.begin());
        m.insert({x[i],i});
    }
    cout<<ans<<endl;
    return 0;
}
