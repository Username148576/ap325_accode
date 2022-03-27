#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct p{
    int x,y;
};

vector<p> v;

bool cmp(p a,p b)
{
    return a.x<b.x;
}

int main()
{
    int n,i,j,a,b,Min=1000000000;
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            a=v[j].x-v[i].x;
            if(a>=Min)break;
            b=abs(v[j].y-v[i].y);
            if(b>=Min)continue;
            if(a+b<Min)Min=a+b;
        }
    }
    cout<<Min<<endl;
    return 0;
}
