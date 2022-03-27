#include <iostream>

using namespace std;

int x[105],y[100005];

int main()
{
    int n,w,i,j,a;
    cin>>n>>w;
    for(i=0;i<n;i++)
        cin>>x[i];
    for(i=0;i<n;i++)
    {
        cin>>a;
        for(j=w;j>=x[i];j--)
        {
            if(y[j-x[i]]+a>y[j])
                y[j]=y[j-x[i]]+a;
        }
    }
    cout<<y[w]<<endl;
    return 0;
}
