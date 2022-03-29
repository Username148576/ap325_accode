#include <iostream>
#include<vector>

using namespace std;

int Max=0,t;
int value[500005];

bool visit[50005]={false};

vector<int> v[50005];

void f(int x)
{
    int i;
    for(i=0;i<v[x].size();i++){
        if(!visit[v[x][i]])
        {
            visit[v[x][i]]=true;
            f(v[x][i]);
            t+=value[v[x][i]];
        }
    }
}

int main()
{
    int m,n,i,a,b;
    cin>>m>>n;
    for(i=0;i<m;i++)cin>>value[i];
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(i=0;i<m;i++)
    {
        if(!visit[i]){
            visit[i]=true;
            t=value[i];
            f(i);
        }
        if(Max<t)Max=t;
    }
    cout<<Max<<endl;
    return 0;
}
