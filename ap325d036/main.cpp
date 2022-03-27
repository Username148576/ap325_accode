#include <iostream>
#include<set>
#include<map>

using namespace std;

set<int> s;
map<int,int> m;

int x[200002],y[200002];

int main()
{
    int k,n,i,j,ans=0,t=0;
    cin>>k>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        s.insert(x[i]);
    }
    i=0;
    for(auto e:s)
    {
        m.insert({e,i});
        i++;
    }
    for(i=0;i<k;i++)
    {
        auto it=m.find(x[i]);
        y[it->second]++;
        if(y[it->second]==1)t++;
    }
    if(t==k)ans+=1;
    for(i=k,j=0;i<n;i++,j++)
    {
        auto it=m.find(x[i]);
        y[it->second]++;
        if(y[it->second]==1)t++;
        it=m.find(x[j]);
        y[it->second]--;
        if(y[it->second]==0)t--;
        if(t==k)ans+=1;
    }
    cout<<ans;
    return 0;
}
