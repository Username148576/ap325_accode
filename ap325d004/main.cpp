#include <iostream>

using namespace std;

int x[50001],n,k;
long long ans=0;

int f(int s,int b,int m,int s1,int b1)
{
    if(b-s<=1)
    {
        long long t1=0,t2=0;
        if(b==b1)return s;
        else if(s==s1)return b;
        for(int i=s1;i<b1+1;i++)t1+=x[i]*(i-b);
        for(int i=s1;i<b1+1;i++)t2+=x[i]*(i-s);
        if(abs(t1)<abs(t2))return b;
        else return s;
    }
    long long t=0;
    for(int i=s1;i<b1+1;i++)t+=x[i]*(i-m);
    if(t<0)return f(s,m,(m+s)/2,s1,b1);
    else if(t>0)return f(m,b,(b+m)/2,s1,b1);
    else return m;
}
long long g(int s,int b,int l)
{
    if(l==k || b-s<2)return 0;
    int m=f(s,b,(s+b)/2,s,b);
    //cout<<m<<endl;
    return x[m]+g(s,m-1,l+1)+g(m+1,b,l+1);
}

int main()
{
    int i;
    cin>>n>>k;
    for(i=0;i<n;i++)cin>>x[i];
    cout<<g(0,n-1,0);
    return 0;
}
