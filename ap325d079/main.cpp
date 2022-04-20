#include <iostream>

using namespace std;

int x[205];

int visit[205][205];

int f(int i,int j){
    if(j-i<2)return 0;
    else if(j-i==2)return x[j]-x[i];
    else{
        if(visit[i][j]!=0)return visit[i][j];
        else{
            int Min=1000000000,a,t;
            for(a=i+1;a<j;a++){
                visit[i][a]=f(i,a);
                visit[a][j]=f(a,j);
                t=visit[i][a]+visit[a][j];
                if(t<Min)Min=t;
            }
            return Min+x[j]-x[i];
        }
    }
}

int main()
{
    int n,k,i;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>x[i];
    }
    x[0]=0;
    x[n+1]=k;
    cout<<f(0,n+1)<<endl;
    return 0;
}
