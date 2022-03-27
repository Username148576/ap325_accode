#include <iostream>

using namespace std;

int main()
{
    int n,i,x,x1,t=0,Max=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(i==0)
        {
            x1=x;
            continue;
        }
        t+=x-x1;
        x1=x;
        if(t<0)t=0;
        if(t>Max)Max=t;
    }
    cout<<Max<<endl;
    return 0;
}
