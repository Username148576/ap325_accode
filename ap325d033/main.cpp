#include <iostream>

using namespace std;

int main()
{
    int n,l,ans=0,i,Max=0,j;
    int x[200002]={0},v[200002]={0};
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        if(i>=l)
        {
            v[x[i-l]]-=1;
            if(v[x[i-l]]==0)ans-=1;
        }
        v[x[i]]+=1;
        if(v[x[i]]==1)
        {
            ans+=1;
            if(ans>Max)Max=ans;
        }
    }
    cout<<Max;
    return 0;
}
