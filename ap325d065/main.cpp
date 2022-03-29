#include <iostream>
#include<map>
#include<set>

using namespace std;

multimap<long long,long long> m;

set<long long> s;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    long long n,i,le,ri,M=0,Max=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        m.insert({x,i});
        if(M<x)M=x;
    }
    s.insert(-1);
    s.insert(n);
    for(auto e:m)
    {
        if(e.first==M){
            auto it=s.end();
            it--;
            ri=*it;
            it--;
            le=*it;
        }
        else{
            auto it=s.upper_bound(e.second);
            it--;
            le=*it;
            it++;
            ri=*it;
        }
        x=(ri-le-1)*e.first;
        if(x>Max)Max=x;
        s.insert(e.second);
    }
    cout<<Max<<endl;
    return 0;
}
