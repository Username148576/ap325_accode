#include <iostream>
#include<map>

using namespace std;

int main()
{
    int n,i,a,b,Max,ans=1;
    multimap<int,int> m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        m.insert({b,a});
    }
    Max=m.begin()->first;
    for(auto e:m)
    {
        if(e.second<=Max)
        {
            continue;
        }
        else
        {
            Max=e.first;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
