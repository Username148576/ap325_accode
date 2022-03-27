#include <iostream>

using namespace std;

int main()
{
    long long n,i,t=0,ans=0,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(t<0)t=0;
        t+=a;
        ans=max(t,ans);
    }
    cout<<ans<<endl;
    return 0;
}
