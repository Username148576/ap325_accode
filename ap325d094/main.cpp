#include <iostream>
#include<queue>

using namespace std;

struct p{
    int a,b;
};

queue<p> q;

int n,g,l,r,step=-1,s,t;

int x[1000005];

bool visit[1000005]={false};

void f(){
    while(!q.empty()){
        if(q.front().a==g){
            step=q.front().b;
            return;
        }
        s=q.front().a;
        t=q.front().b;
        visit[s]=true;
        q.pop();
        if(s-l>0 && x[s-l]>0 && x[s-l]<n && !visit[x[s-l]]){
            visit[s-l]=true;
            q.push({x[s-l],t+1});
        }
        if(s+r<n && x[s+r]>0 && x[s+r]<n && !visit[x[s+r]]){
            visit[s+r]=true;
            q.push({x[s+r],t+1});
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int i;
    cin>>n>>g>>l>>r;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    q.push({0,0});
    f();
    cout<<step<<endl;
    return 0;
}
