#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct p{
    long long x,y;
};

vector<p> v;

bool cmp(p a,p b)
{
    return a.x<b.x;
}

int main()
{
    long long n,i,a,b,Max,Min,t=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    Min=v[0].x;
    Max=v[0].y;
    for(i=1;i<n;i++)
    {
        if(v[i].x>Max)
        {
            t+=Max-Min;
            Min=v[i].x;
            Max=v[i].y;
        }
        else
        {
            Max=max(v[i].y,Max);
        }
    }
    t+=Max-Min;
    cout<<t<<endl;
}
