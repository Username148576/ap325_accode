#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct p{
    int x,y;
};

bool cmp(p a,p b)
{
    return a.x>b.x;
}

vector<p> v;

int main()
{
    int n,i,t=1,b,Max;
    int a[100005];
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)
    {
        cin>>b;
        v.push_back({a[i],b});
    }
    sort(v.begin(),v.end(),cmp);
    Max=v[0].y;
    for(i=1;i<n;i++)
    {
        if(v[i].y>Max)
        {
            Max=v[i].y;
            t++;
        }
    }
    cout<<t<<endl;
    return 0;
}
