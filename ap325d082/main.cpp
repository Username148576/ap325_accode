#include <iostream>

using namespace std;

int x[30][30][30][30],a[30][30];

int f(int a1,int a2,int b1,int b2){
    int i;
    if(a2-a1==0 || b2-b1==0)return 0;
    else if(x[a1][a2][b1][b2]!=0){
        return x[a1][a2][b1][b2];
    }
    else{
        int Min=1000000000;
        int p=0,q=0,t;
        for(i=b1;i<=b2;i++){
            if(a[a1][i]==0)p++;
            else q++;
        }
        t=min(p,q)+f(a1+1,a2,b1,b2);
        if(t<Min)Min=t;
        p=0;q=0;
        for(i=b1;i<=b2;i++){
            if(a[a2][i]==0)p++;
            else q++;
        }
        t=min(p,q)+f(a1,a2-1,b1,b2);
        if(t<Min)Min=t;
        p=0;q=0;
        for(i=a1;i<=a2;i++){
            if(a[i][b1]==0)p++;
            else q++;
        }
        t=min(p,q)+f(a1,a2,b1+1,b2);
        if(t<Min)Min=t;
        p=0;q=0;
        for(i=a1;i<=a2;i++){
            if(a[i][b2]==0)p++;
            else q++;
        }
        t=min(p,q)+f(a1,a2,b1,b2-1);
        if(t<Min)Min=t;
        x[a1][a2][b1][b2]=Min;
        return Min;
    }
}

int main()
{
    int i,j,m,n;
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<f(0,m-1,0,n-1)<<endl;
    return 0;
}
