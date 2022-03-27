#include <iostream>
#include<set>
using namespace std;

set<int> s,s1;

int main()
{
    long long n,m,k,i,ans=0,x;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    for(i=0;i<m;i++)
    {
        cin>>x;
        s1.insert(x);
    }
    for(auto e:s)
    {
        if(s1.find(k-e)!=s1.end())ans+=1;
    }
    cout<<ans<<endl;
    return 0;
}
