#include <iostream>
#include<set>

using namespace std;

set<long long> s;

int main()
{
    int n,k,i,t=0,Max=-1000000000;
    long long x[200002];
    cin>>n>>k;
    s.insert(0);
    cin>>x[0];
    if(x[0]<=k)Max=x[0];
    s.insert(x[0]);
    for(i=1;i<n;i++)
    {
        cin>>x[i];
        x[i]+=x[i-1];
        s.insert(x[i]);
        auto it=s.lower_bound(x[i]-k);
        if(it!=s.end()){
        if(x[i]-*it>Max)
        {
            Max=x[i]-*it;
            t=1;
        }
        else if(x[i]-*it==Max)t+=1;}
    }
    cout<<Max<<endl<<t<<endl;
    return 0;
}
