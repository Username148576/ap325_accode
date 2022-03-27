#include <iostream>
#include<vector>

using namespace std;

long long ans=0,x[2][100005],Min=0,t=0,b;
vector<int> v;

int main()
{
    int n,i,l;
    cin>>n>>l;
    x[0][0]=0;
    x[0][n+1]=l;
    for(i=1;i<=n;i++)cin>>x[0][i];
    for(i=1;i<=n;i++)cin>>x[1][i];
    for(i=1;i<=n;i++)
    {
        b=0;
        if(v.empty())Min=0;
        else Min=v[v.size()-1];
        if(x[1][i]<=x[0][i]-x[0][Min])
        {
            if(x[1][i]>ans)ans=x[1][i];
            t+=1;
            b=1;
        }
        else if(x[1][i]<=x[0][i+1]-x[0][i]){if(x[1][i]>ans)ans=x[1][i];t+=1;b=1;}
        else v.push_back(i);
            while(b==1 && !v.empty() && x[1][v[v.size()-1]]<=x[0][i+1]-x[0][v[v.size()-1]])
            {
                if(x[1][v[v.size()-1]]>ans)ans=x[1][v[v.size()-1]];
                t+=1;
                v.pop_back();
            }
    }
    cout<<t<<endl<<ans<<endl;
    return 0;
}
