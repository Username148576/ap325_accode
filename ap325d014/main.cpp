#include <iostream>

using namespace std;

long long ans[4],n=1000000007;

void f(long long x)
{
    long long a,b,c,d;
    if(x==1)
    {
        ans[0]=1;
        ans[1]=1;
        ans[2]=1;
        ans[3]=0;
        return;
    }
    f(x/2);
    if(x%2==0)
    {
        a=ans[0];
        b=ans[1];
        c=ans[2];
        d=ans[3];
        ans[0]=(a*a%n+b*c%n)%n;
        ans[1]=(a*b%n+b*d%n)%n;
        ans[2]=(c*a%n+d*c%n)%n;
        ans[3]=(c*b%n+d*d%n)%n;
        return;
    }
    else
    {
        a=ans[0];
        b=ans[1];
        c=ans[2];
        d=ans[3];
        ans[0]=(a*a%n+b*c%n)%n;
        ans[1]=(a*b%n+b*d%n)%n;
        ans[2]=(c*a%n+d*c%n)%n;
        ans[3]=(c*b%n+d*d%n)%n;
        a=ans[0];
        b=ans[1];
        c=ans[2];
        d=ans[3];
        ans[0]=(a+b)%n;
        ans[1]=a;
        ans[2]=(c+d)%n;
        ans[3]=c;
        return;
    }
}

int main()
{
    long long x;
    while(1)
    {
        cin>>x;
        if(x==-1)break;
        f(x);
        cout<<ans[2]<<endl;
    }
    return 0;
}
