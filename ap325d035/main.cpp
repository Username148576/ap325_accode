#include <iostream>

using namespace std;

int a[200002],x[200002];

int main()
{
    int n,i,j,ans=0;
    cin>>n;
    for(i=0,j=0;i<n;i++)
    {
        cin>>a[i];
        x[a[i]]++;
        while(x[a[i]]>1)
        {
            x[a[j]]--;
            j++;
        }
        if(i-j>ans)ans=i-j;
    }
    cout<<ans+1;
    return 0;
}
