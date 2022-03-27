#include <iostream>

using namespace std;

long long ans,x,y,n;

int f(int i)
{
    if(i==1)return x%n;
    ans=f(i/2);
    if(i%2==0)return ans%n*ans%n;
    else return ans%n*ans%n*x%n;
}

int main()
{
    cin>>x>>y>>n;
    cout<<f(y);
    return 0;
}
