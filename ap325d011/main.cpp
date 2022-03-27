#include <iostream>
#include<map>
#include<set>
using namespace std;

set<int> s;
map<int,int> m;

int main()
{
    int i,n,x[100002];
    cin>>n;
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
    for(i=0;i<n;i++)
    {
        auto it=m.find(x[i]);
        cout<<it->second<<' ';
    }
    cout<<endl;
    return 0;
}
