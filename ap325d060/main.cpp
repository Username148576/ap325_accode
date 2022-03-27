#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

struct t{
    int a,b,c;
};

vector<t> v;

bool cmp(t x,t y){
    return x.a<y.a;
}

priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;

int main()
{
    int n,i,x,y,z,s=0,Max=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        v.push_back({y,z,x});
    }
    sort(v.begin(),v.end(),cmp);
    for(i=0;i<n;i++)
    {
        while(!pq.empty() && pq.top().first<v[i].a)
        {
            s-=pq.top().second;
            pq.pop();
        }
        pq.push({v[i].b,v[i].c});
        s+=v[i].c;
        if(s>Max)Max=s;
    }
    cout<<Max<<endl;
    return 0;
}
