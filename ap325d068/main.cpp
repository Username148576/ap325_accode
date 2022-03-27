#include <iostream>

using namespace std;

int main()
{
    int n,i,x,t1=0,t2=0,t3=0,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i==2)t3=100000;
        cin>>x;
        t=min(t1+x,t2+x);
        t=min(t,t3+x);
        t3=t2;
        t2=t1;
        t1=t;
    }
    if(n!=1)cout<<min(t,t2)<<endl;
    else cout<<x<<endl;
    return 0;
}
