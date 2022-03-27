#include <iostream>
#include<vector>

using namespace std;

vector<int> leaves;
int parent[100002],h[100002],root;
long long ans=0;

void f(int i)
{
    if(parent[i]==0)
    {
        root=i;
        return;
    }
    if(h[parent[i]]<h[i]+1)
        h[parent[i]]=h[i]+1;
    else return;
    f(parent[i]);
}

int main()
{
    int n,i,k,j,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        if(k==0)leaves.push_back(i);
        for(j=0;j<k;j++)
        {
            cin>>a;
            parent[a]=i;
        }
    }
    for(auto e:leaves)
    {
        h[e]=0;
        f(e);
    }
    for(i=1;i<=n;i++)ans+=h[i];
    cout<<root<<endl<<ans<<endl;
    return 0;
}
