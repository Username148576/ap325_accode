#include <iostream>
#include<vector>
#include<set>

using namespace std;

long long ans,n,m,i,j,k,a,Max=-1000000000;


int main()
{
    cin>>ans;
    cin>>n>>m;
    vector<vector<long long> > x(n+1,vector<long long>(m));
    for(i=1;i<=n;i++)
    {
        cin>>x[i][0];
        x[i][0]+=x[i-1][0];
        for(j=1;j<m;j++)
        {
            cin>>a;
            x[i][j]=(a+x[i][j-1]+x[i-1][j]-x[i-1][j-1]);
        }
        for(k=0;k<i;k++)
        {
            set<long long> s;
            s.insert(0);
            for(j=0;j<m;j++)
            {
                s.insert(x[i][j]-x[k][j]);
                auto it=s.lower_bound(x[i][j]-x[k][j]-ans);
                if(it!=s.end())
                    if(x[i][j]-x[k][j]-*it>Max)Max=x[i][j]-x[k][j]-*it;
            }
        }
    }
    cout<<Max<<endl;
    return 0;
}
