#include <iostream>
#include<set>
#include<map>

using namespace std;

int x[200002],y[200002],z[200002];

set<int> s;
map<int,int> m;

int main()
{
    int n,i,k,t=0,ans,p=0;
    cin>>n;
    ans=n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        s.insert(x[i]);
    }
    k=s.size();
    i=0;
    for(auto e:s)
    {
        m.insert({e,i});
        i++;
    }
    for(i=0;i<n;i++)
    {
        auto it=m.find(x[i]);
        y[i]=it->second;
    }
    for(i=0;i<n;i++)
    {
        z[y[i]]++;
        if(z[y[i]]==1)t++;
        while(t==k)
        {
            if(z[y[p]]<=1)break;
            else
            {
                z[y[p]]--;
                p++;
            }
            if(i-p<ans)ans=i-p;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}
