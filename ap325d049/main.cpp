#include <iostream>
#include<set>

using namespace std;

set<int> S;

int t,Max=0,Min=1000000005,a=0,k;

void f(int s,int b,int m)
{
    int i;
    if(s==b)
    {
        cout<<s<<endl;
        a=2;
        return;
    }
    else if(s==b-1)
    {
        a+=1;
        if(a==2)
        {
            cout<<b<<endl;
            return;
        }
    }
    if(a<2){
    for(i=0;i<k;i++)
    {
        t+=m;
        if(t>=Max)
        {
            t=Min;
            f(s,m,(s+m)/2);
        }
        else if(i==k-1)
        {
            t=Min;
            f(m,b,(m+b)/2);
        }
        else t=*S.upper_bound(t);
    }}
}

int main()
{
    int n,i,x;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>Max)Max=x;
        if(x<Min)Min=x;
        S.insert(x);
    }
    t=Min;
    f(0,(Max-Min)/k+1,((Max-Min)/k+1)/2);
}
