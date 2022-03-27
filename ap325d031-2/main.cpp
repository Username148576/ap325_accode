#include <iostream>

using namespace std;

long long n,k,x[200002],i,j,ans=0,t,a;

int main()
{
    cin>>n>>k;
    cin>>x[0];
    j=0;
    for(i=1;i<n;i++)
    {
        cin>>x[i];
        x[i]+=x[i-1];
        a=x[i];
        if(x[i]-k>0)
        {
            j=lower_bound(x+j,x+i,x[i]-k)-x;
            a=x[i]-x[j];
        }
        if(a>ans)
        {
            ans=a;
            t=1;
        }
        else if(a==ans)
        {
            t+=1;
        }
    }
    cout<<ans<<endl<<t<<endl;
    return 0;
}
