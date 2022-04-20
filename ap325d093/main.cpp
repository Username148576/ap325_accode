#include <iostream>
#include<vector>
#include<queue>

using namespace std;

vector<string> v;

struct p{
    int a,b;
};

queue<p> q;

char a[505][505];

int visit[505][505];

int main()
{
    int m,n,i,j,di,dj,ni,nj;
    int y[4]={1,-1,0,0},x[4]={0,0,-1,1};
    cin>>m>>n;
    for(i=0;i<=m+1;i++){
        a[i][0]='1';
        a[i][n+1]='1';
    }
    for(i=0;i<=n+1;i++){
        a[0][i]='1';
        a[m+1][i]='1';
    }
    for(i=1;i<=m;i++){
        string s;
        cin>>s;
        for(j=1;j<=n;j++){
            a[i][j]=s[j-1];
        }
    }
    for(i=0;i<=m+1;i++){
        for(j=0;j<=n+1;j++)visit[i][j]=-1;
    }
    q.push({1,1});
    while(!q.empty() && visit[m][n]<0){
        di=q.front().a;
        dj=q.front().b;
        q.pop();
        for(i=0;i<4;i++){
            ni=di+y[i];
            nj=dj+x[i];
            while(a[ni][nj]!='1'){
                if(visit[ni][nj]==-1){
                    q.push({ni,nj});
                    visit[ni][nj]=visit[di][dj]+1;
                }
                ni+=y[i];
                nj+=x[i];
            }
        }
    }
    if(n==1 && m==1)cout<<'0'<<endl;
    else cout<<visit[m][n]<<endl;
}
