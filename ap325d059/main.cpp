#include <iostream>
#include<queue>

using namespace std;

int t=0,n,k;
int x[100005];

int f(int s,int b)
{
    priority_queue<int,vector<int>,greater<int> > pq;
    if(s==b)return s;
    else if(s+1==b)
    {
        t+=1;
        if(t==2)return b;
    }
    if(t<2){
    int m=(s+b)/2,i,a;
    for(i=0;i<m;i++)
    {
        pq.push(x[i]);
    }
    for(i=m;i<n;i++)
    {
        a=pq.top();
        pq.pop();
        if(a+x[i]<=k)pq.push(a+x[i]);
        else
        {
            return f(m,b);
        }
    }
    return f(s,m);}
}

int main()
{
    int i;
    cin>>n>>k;
    for(i=0;i<n;i++)cin>>x[i];
    cout<<f(0,n)<<endl;
    return 0;
}
