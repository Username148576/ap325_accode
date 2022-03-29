#include <iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> v[105];

queue<int> q,q1;

bool visit[105]={false};

int ans=0,total=0;

int main()
{
    int m,n,x,a,b,i;
    cin>>m>>n;
    cin>>x;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }
    visit[x]=true;
    for(i=0;i<v[x].size();i++){
            q.push(v[x][i]);
            q1.push(1);
            visit[v[x][i]]=true;
    }
    while(!q.empty())
    {
        ans++;
        total+=q1.front();
        for(i=0;i<v[q.front()].size();i++){
            if(!visit[v[q.front()][i]]){
                visit[v[q.front()][i]]=true;
                q.push(v[q.front()][i]);
                q1.push(q1.front()+1);
            }
        }
        q.pop();
        q1.pop();
    }
    cout<<ans<<endl<<total<<endl;
    return 0;
}
