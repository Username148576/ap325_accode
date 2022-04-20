#include <iostream>

using namespace std;

int board[105][105];

int ans=0,m,n;

bool visit[105][105]={false};

void f(int i,int j){
    int Mini,Minj,Min=100005,b=0;
    visit[i][j]=true;
    if(i-1>=0 && i-1<m && j>=0 && j<n && !visit[i-1][j]){
        if(board[i-1][j]<Min){
            Mini=i-1;
            Minj=j;
            Min=board[i-1][j];
            b=1;
        }
    }
    if(i+1>=0 && i+1<m && j>=0 && j<n && !visit[i+1][j]){
        if(board[i+1][j]<Min){
            Mini=i+1;
            Minj=j;
            Min=board[i+1][j];
            b=1;
        }
    }
    if(i>=0 && i<m && j-1>=0 && j-1<n && !visit[i][j-1]){
        if(board[i][j-1]<Min){
            Mini=i;
            Minj=j-1;
            Min=board[i][j-1];
            b=1;
        }
    }
    if(i>=0 && i<m && j+1>=0 && j+1<n && !visit[i][j+1]){
        if(board[i][j+1]<Min){
            Mini=i;
            Minj=j+1;
            Min=board[i][j+1];
            b=1;
        }
    }
    if(b==1){
        ans+=Min;
        f(Mini,Minj);
    }
}

int main()
{
    int i,j,Mini,Minj,Min=100005;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>board[i][j];
            if(Min>board[i][j])
            {
                Mini=i;
                Minj=j;
                Min=board[i][j];
            }
        }
    }
    ans+=Min;
    f(Mini,Minj);
    cout<<ans<<endl;
    return 0;
}
