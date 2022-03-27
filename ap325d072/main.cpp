#include <iostream>

using namespace std;

int main()
{
    long long n,t,x,y,a,b,x1,y1,a1,b1;
    cin>>n>>t;
    cin>>x>>y;
    a=abs(t-x);
    b=abs(t-y);
    x1=x;
    y1=y;
    n-=1;
    while(n--)
    {
        cin>>x>>y;
        a1=a;
        b1=b;
        a=min(a1+abs(x1-x),b1+abs(y1-x));
        b=min(a1+abs(x1-y),b1+abs(y1-y));
        x1=x;
        y1=y;
    }
    cout<<min(a,b)<<endl;
    return 0;
}
