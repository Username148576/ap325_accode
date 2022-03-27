#include <iostream>

using namespace std;

int x[205];

int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    cin>>x[0];
    for(i=1;i<m;i++)
    {
        cin>>k;
        x[i]=x[i-1]+k;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>k;
            if(j==0)x[j]+=k;
            else x[j]=max(x[j]+k,x[j-1]+k);
        }
    }
    cout<<x[m-1]<<endl;
    return 0;
}
