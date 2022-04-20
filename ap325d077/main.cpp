#include <iostream>
#include<deque>

using namespace std;

struct p{
    int a,b;
};

deque<p> q;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n,k,i,j,Min=1000000000;
    int x[200005],ans[200005];
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    for(i=0;i<=k;i++){
        ans[i]=x[i];
        while(!q.empty() && ans[i]<q.back().a)q.pop_back();
        q.push_back({ans[i],i});
    }
    for(i=k+1;i<=2*k;i++){
        ans[i]=q.front().a+x[i];
        while(!q.empty() && ans[i]<q.back().a)q.pop_back();
        q.push_back({ans[i],i});
    }
    for(i=2*k+1;i<n;i++){
        ans[i]=q.front().a+x[i];
        while(!q.empty() && ans[i]<q.back().a)q.pop_back();
        if(!q.empty() && q.front().b<i-2*k)q.pop_front();
        q.push_back({ans[i],i});
    }
    //for(i=0;i<n;i++)cout<<ans[i]<<' ';
    //cout<<endl;
    for(i=n-k-1;i<n;i++)
    {
        if(Min>ans[i])Min=ans[i];
    }
    cout<<Min<<endl;
    return 0;
}
