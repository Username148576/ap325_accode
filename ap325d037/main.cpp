#include <iostream>
#include<map>
#include<vector>

using namespace std;

struct p{
    int x,y;
};

vector<p> b,s;
multimap<int,int> m;
int x[200002][2],y[200002];

int main()
{
    int n,k,i,ans=0,a,b1=0,s1=0,j;
    cin>>n>>k;
    for(i=0;i<n;i++)cin>>y[i];
    for(i=0;i<n;i++)
    {
        cin>>a;
        m.insert({y[i],a});
    }
    i=0;
    for(auto e:m)
    {
        x[i][0]=e.first;
        x[i][1]=e.second;
        i++;
    }
    for(i=0;i<n;i++)
    {
        if(!b.empty() && b[b1].y<x[i][0]-k)b1++;
        if(!s.empty() && s[s1].y<x[i][0]-k)s1++;
        while(b.size()>b1 && x[i][1]>b[b.size()-1].x)b.pop_back();
        b.push_back({x[i][1],x[i][0]});
        //for(j=b1;j<b.size();j++)cout<<b[j].x<<' '<<b[j].y<<endl;
        //cout<<endl;
        while(s.size()>s1 && x[i][1]<s[s.size()-1].x)s.pop_back();
        s.push_back({x[i][1],x[i][0]});
       // for(j=s1;j<s.size();j++)cout<<s[j].x<<' '<<s[j].y<<endl;
        //cout<<endl;
        if(b[b1].x-s[s1].x>ans)ans=b[b1].x-s[s1].x;
        //cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}
