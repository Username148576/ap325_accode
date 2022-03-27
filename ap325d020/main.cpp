#include <iostream>
#include<set>

using namespace std;

long long n,ans,x[100000],i,j,Max=-1000000000;
set<long long> s;

int main()
{
    cin>>n>>ans;
    cin>>x[0];
    s.insert(0);
    for(i=1;i<n;i++)
    {
        cin>>x[i];
        x[i]+=x[i-1];
        s.insert(x[i-1]);
    }
    s.insert(x[n-1]);
    for(auto e:s)
    {
        auto it=s.lower_bound(e-ans);
        if(it!=s.end())
            if(e-*it>Max && e-*it<=ans)Max=e-*it;
        else
        {
            it--;
            if(e-*it>Max && e-*it<=ans)Max=e-*it;
        }
    }
    cout<<Max<<endl;
    return 0;
}
