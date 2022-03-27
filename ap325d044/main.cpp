#include <iostream>
#include<set>

using namespace std;

int main()
{
    long long n,i,x,ans=0,a[100005];
    multiset<int> s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    i=0;
    for(auto e:s)
    {
        if(i!=0)a[i]=a[i-1]+e;
        else a[i]=e;
        i++;
    }
    for(i=0;i<n;i++)
        ans+=a[i];
    cout<<ans<<endl;
    return 0;
}
