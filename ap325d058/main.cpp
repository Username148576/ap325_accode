#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct p{
    int c,d;
};

bool cmp(p x,p y)
{
    return x.c<y.c;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int k,n,i,y,t=0,b;
    int x[100005];
    cin>>k;
    while(k--)
    {
        vector<p> v;
        b=0;t=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>x[i];
        for(i=0;i<n;i++)
        {
            cin>>y;
            v.push_back({y,x[i]});
        }
        sort(v.begin(),v.end(),cmp);
        for(i=0;i<v.size();i++)
        {
            t+=v[i].d;
            if(t>v[i].c)
            {
                b=1;
                cout<<"no"<<endl;
                break;
            }
        }
        if(b==0)cout<<"yes"<<endl;
    }
    return 0;
}
