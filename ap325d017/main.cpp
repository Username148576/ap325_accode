#include <iostream>
#include<vector>
using namespace std;

long long x,p;
vector<int> v;

long long f(long long t)
{
    if(t==1)return x%p;
    long long y=f(t/2);
    if(t%2==0)return y%p*y%p;
    else return y%p*y%p*x%p;
}

int main()
{
    long long i,n,h;
    cin>>n>>p;
    for(i=0;i<n;i++)
    {
        cin>>x;
        cout<<f(p-2)<<' ';
    }
    cout<<endl;
    return 0;
}
