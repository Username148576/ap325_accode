#include <iostream>
#include<map>

using namespace std;

multimap<int,int> m;

int main()
{
    long long n,i,y,t=0,ans=0;
    int x[100005];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>x[i];
    for(i=0;i<n;i++)
    {
        cin>>y;
        m.insert({x[i],y});
    }
    for(auto e:m)
    {
        t+=e.first;
        ans+=e.second-t;
    }
    cout<<ans<<endl;
    return 0;
}
