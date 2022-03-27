#include <iostream>
#include<map>
#include<algorithm>

using namespace std;

map<int,int> s;

int main()
{
    int n,i,x;
    long long ans=0;
    cin>>n;
    s.insert({10000001,0});
    for(i=1;i<=n;i++)
    {
        cin>>x;
        auto it=s.upper_bound(x);
        ans+=i-it->second;
        while(x>=s.begin()->first)s.erase(s.begin());
        s.insert({x,i});
    }
    cout<<ans;
    return 0;
}
