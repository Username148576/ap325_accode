#include <iostream>

using namespace std;

int main()
{
    int n,i,t,t1=0,t2=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        t=min(t1+x,t2+x);
        t2=t1;
        t1=t;
    }
    cout<<t<<endl;
    return 0;
}
