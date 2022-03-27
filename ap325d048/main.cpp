#include <iostream>
#include<set>

using namespace std;

int main()
{
    long long n,i,a,b,x,t=0,ans=0;
    multiset<long long> s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        t+=x;
        s.insert(x);
    }
    for(i=0;i<n-1;i++)
    {
        a=*s.begin();
        s.erase(s.begin());
        b=*s.begin();
        s.erase(s.begin());
        ans+=a+b;
        s.insert(a+b);
    }
    cout<<t<<endl<<ans<<endl;
    return 0;
}
