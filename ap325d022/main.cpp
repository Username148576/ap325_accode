#include <iostream>
#include<vector>

using namespace std;

long long ans1,ans2,p=1000000009,x,y,n;
vector<int> v;
void g(int);

void f(int i)
{
    if(i==1)
    {
        ans1=x%p;
        ans2=y%p;
        g(v.size()-1);
        return;
    }
    if(i%2==0)v.push_back(0);
    else v.push_back(1);
    f(i/2);
}

void g(int i)
{
    if(i==-1)return;
    long long a=ans1,b=ans2;
    //cout<<a<<' '<<b<<endl;
    //cout<<v[i]<<endl;
    if(v[i]==0)
    {
        ans1=(a%p*a%p+b%p*b%p*2%p)%p;
        ans2=b%p*a%p*2%p;
        g(i-1);
    }
    else
    {
        ans1=(a%p*a%p*x%p+x%p*b%p*b%p*2%p+a%p*b%p*y%p*4%p)%p;
        ans2=(a%p*a%p*y%p+y%p*b%p*b%p*2%p+a%p*x%p*b%p*2%p)%p;
        g(i-1);
    }

}

int main()
{
    cin>>x>>y>>n;
    f(n);
    cout<<ans1<<' '<<ans2<<endl;
    //for(auto e:v)cout<<e<<endl;
    return 0;
}
