#include <iostream>

using namespace std;

string s;
long long n,x=-1,ans=0,l;

void f(int n)
{
    x+=1;
    if(x==l)return;
    if(s[x]=='2')
    {
        for(int i=0;i<4;i++)
            f(n/4);
    }
    else if(s[x]=='1')
    {
        ans+=n;
    }
}

int main()
{
    cin>>s;
    l=s.length();
    cin>>n;
    f(n*n);
    cout<<ans;
    return 0;
}
